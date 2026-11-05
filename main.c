#include <stdio.h>

int main() {
    double dtb;
    double drl;
  
  scanf("%lf",&dtb);
  
  scanf("%lf", &drl);
  if (dtb >=9.0 && drl >=90) {
    printf("Xep loai hoc bong :XUAT_SAC\n");
  }
  else if (dtb >=8.0 && drl >=80) {
    printf ("Xep loai hoc bong :GIOI\n");
  }
  else if (dtb >=7.0 && drl>=70) {
    printf ("Xep loai hoc bong :KHA\n");
  }
  else {
    printf ("Khong duoc hoc bong\n");
  }
     return 0;
}

  

  
