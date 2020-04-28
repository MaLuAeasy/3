#include <iostream>
#include <limits.h>
#define n 10
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//                        int i,j;
//          for(i=0;i<numsSize;i++){
//              for(j=i+1;j<numsSize-1;j++){
//                  if(nums[i]+nums[j]==target){
//                      returnSize[0]=i;
//                      returnSize[1]=j;
//                  }
//              }
//          }
//                    return returnSize;
//}
//int main(){
//       int a[]={2,7,11,15};
//       int*p;
//       p=a;
//   int *result=(int*)malloc(sizeof(int)*2);
//       twoSum(p,4,9,result);
//       printf("%d %d",result[0],result[1]);
//}





//void Merge(int a[],int p,int q,int r){
//    int left[n],right[n];
//    int max1,max2,l,i,j;
//    max1=q-p+1;
//    max2=r-q;
//    for( i=0;i<max1;i++){
//        left[i]=a[p+i];
//    }
//    left[max1]=INT8_MAX;
//    for( j=0;j<max2;j++){
//        right[j]=a[q+j+1];
//    }
//    right[max2]=INT8_MAX;
//    i=0;
//    j=0;
//       for(l=p;l<=r;l++){
//           if(left[i]>right[j]){
//               a[l]=right[j];
//               j++;
//           }else{
//               a[l]=left[i];
//               i++;
//           }
//       }
//
//}
//void Mergesort(int a[],int i,int j){
//    int mid;
//    if(i<j){
//
//        mid=(i+j)/2;
//        Mergesort(a,i,mid);
//        Mergesort(a,mid+1,j);
//        Merge(a,i,mid,j);
//
//    }
//}
//int main(){
//    int m;
//    int i;
//    printf("请输入你要输入的数组元素个数:\n");
//    scanf("%d",&m);
//    int a[m+1];
//    for(i=1;i<=m;i++){
//        printf("请输入a[%d]:",i);
//        scanf("%d",&a[i]);
//    }
//    printf("初始数组为:");
//    for(i=1;i<=m;i++){
//        printf("%d ",a[i]);
//    }
//    Mergesort(a,1,m);
//    printf("排序的数组为:");
//    for(i=1;i<=m;i++){
//        printf("%d ",a[i]);
//    }
//
//}
//
