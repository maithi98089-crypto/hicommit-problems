#include <stdio.h>

int main() {
    double dtb;
    double drl;
  printf ("Nhap diem trung binh hoc tao (dtb);
  scanf("%lf",&dtb);
  printf ("Nhap diem ren luyen (drl) :");
  scanf("%lf", &drl);
  if (dtb >=9.0 && drl >=90) {
    printf("Xep loai hoc bong :XUAT_SAC\n");
  }
  else if (dtb >=8.0 && dtb <9.0 && drl >=80) {
    printf ("Xep loai hoc bong ;GIOI\n");
  }
  else if (dtb .=7.0 && dtb <8.0 && drl>=70) {
    printf ("Xep loai hoc bong :KHA\n");
  }
  else {
    printf ("KHONG_dat (khong_duoc_hoc_bong)\n");
  }
     return 0;
}

  

  
