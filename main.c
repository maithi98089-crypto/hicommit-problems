#include <stdio.h>

int main() {
    float dtb;
    float drl;
  if (scanf("%f %f",&dtb,&drl)!=2) {
    
  return 0;
}
  int hoc_luc;
  if (dtb>=9.0) {
    hoc_luc=4;
  } else if (dtb>=8.0)  {
    hoc_luc=3;
  } else if (dtb >=7.0) {
    hoc_luc =2;
  } else {
    hoc_luc =1;
  }
  int ren_luyen;
  if (drl>=90) {
    ren_luyen=3;
  } else if (drl>=80 ) {
    ren_luyen =2;
  } else if (drl >=70) {
    ren_luyen=1;
  } else {
    ren_luyen =0; 
  }
  if(hoc_luc==4 && ren_luyen ==3)  {
    printf ("XUAT_SAC\n");
  } else if (hoc_luc >=3 && ren_luyen>=2) {
    printf ("GIOI\n");
  } else if (hoc_luc >=2 && ren_luyen >=1) {
    printf ("KHA\n");
  } else {
    printf ("KHONG_DAT\n");
  }
  return 0;
}