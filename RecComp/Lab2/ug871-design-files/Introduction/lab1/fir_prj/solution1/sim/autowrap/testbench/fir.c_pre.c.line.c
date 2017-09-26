#pragma line 1 "/afs/ece.cmu.edu/usr/markb1/Documents/fpga_sandbox/RecComp/Lab2/ug871-design-files/Introduction/lab1/fir.c"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "/afs/ece.cmu.edu/usr/markb1/Documents/fpga_sandbox/RecComp/Lab2/ug871-design-files/Introduction/lab1/fir.c"
#pragma line 46 "/afs/ece.cmu.edu/usr/markb1/Documents/fpga_sandbox/RecComp/Lab2/ug871-design-files/Introduction/lab1/fir.c"
#pragma line 1 "/afs/ece.cmu.edu/usr/markb1/Documents/fpga_sandbox/RecComp/Lab2/ug871-design-files/Introduction/lab1/fir.h" 1
#pragma line 50 "/afs/ece.cmu.edu/usr/markb1/Documents/fpga_sandbox/RecComp/Lab2/ug871-design-files/Introduction/lab1/fir.h"
typedef int coef_t;
typedef int data_t;
typedef int acc_t;
#pragma empty_line
void fir (
  data_t *y,
  coef_t c[11 +1],
  data_t x
  );
#pragma line 47 "/afs/ece.cmu.edu/usr/markb1/Documents/fpga_sandbox/RecComp/Lab2/ug871-design-files/Introduction/lab1/fir.c" 2
#pragma empty_line
void fir (
  data_t *y,
  coef_t c[11],
  data_t x
  ) {
#pragma empty_line
  static data_t shift_reg[11];
  acc_t acc;
  data_t data;
  int i;
#pragma empty_line
  acc=0;
  Shift_Accum_Loop: for (i=11 -1;i>=0;i--) {
 if (i==0) {
   shift_reg[0]=x;
      data = x;
    } else {
   shift_reg[i]=shift_reg[i-1];
   data = shift_reg[i];
    }
    acc+=data*c[i];;
  }
  *y=acc;
}
