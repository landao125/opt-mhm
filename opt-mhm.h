/* Global variables and function prototypes for opt-mhm
 *
 * $Revision: 1.16 $
 * $Author: tbereau $
 * $Date: 2009/06/05 17:40:19 $
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

#ifdef OPENMP
#include <omp.h>
#endif

/* Global variables */
extern int NUM_COORD1;
extern int NUM_COORD2;
extern double TOL_FERMI;
extern double TOL_ITER;
extern int N_SIMS;
extern double UPDATE_COEFF;
extern double COORD1_MIN;
extern double COORD1_MAX;
extern double COORD1_WIDTH;
extern double COORD2_MIN;
extern double COORD2_MAX;
extern double COORD2_WIDTH;
extern int MAXFERMI;
extern double TEMP_PROB;
extern double TMIN;
extern double TMAX;
extern double TSTEP;
extern double ESTEP;
extern int PARTIAL_Q_ID;
extern double PARTIAL_Q_MIN;
extern double PARTIAL_Q_MAX;
extern int PARTIAL_Q_NUM;
extern int COORD2_FLAG;
extern int PARTIAL;

extern double EPS;
extern double PI;


/* GLOBAL ARRAYS */
extern char *BETA_FILE;
extern char *OUTPUT_FILE;
extern char *TEMP_AVERAGE;
extern char *TEMP_AVERAGE2;
extern char *PARTIAL_FILE;
extern char *MICRO_FILE;
extern char *F_FILE;
extern double *BETAS;
extern int *START_SAMPLING;
extern int *AUTOCOR_FACTOR;
extern int *NORM_HIST;
extern int *HIST_SIZES;
extern double **HIST;
extern double **COORD1;
extern double **COORD2;
extern double *FENERGIES;
extern double *FENERGIES_TEMP; 
extern double **PROB1;
extern double **PROB2;


#define LINESIZE 100

void readinvtemp(char *file);
void readfile(char *file,int sim, int set_hist_boundaries);
int readfenergies(void);
void writefenergies(void);
void self_iterative(void);
void optimizedf(void);
void calc_prob(void);
void temp_averages(void);
void microcanonical(void);
void density_of_states(double E, double *g_E);
double halfinterval(int q, int i, int left);
double fermi(int q, int i, double x, int left);
double fermi_first(int i, double x, int inc_left, int q);
double init_fermi(int i, int inc_left);






