
#include<stdio.h>
#define PI acos(-1.0)

#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define SWAP(r,s)  do{ t=r; r=s; s=t; } while(0)

void StoogeSort(int a[], int i, int j);
void do_flip(int *list, int length, int num);
void downheap (int *a, int n, int i);
int max (int *a, int n, int i, int j, int k);








int main(){
    srand(clock());//randomized stuff
int width = 1920, hight = 1080;

//sorting_line the corodinats to the line sorted array will refrence this.
//sorting_array[] array that will be scrambled and sorted

 //  number of points counter
 // counts number of points on the circle, used for all further creation of array.


/*
float r= 0,g = 0,b = 0;
int sequence = 0,incresing_value = 1;
int ender = 1;
int end_of_colours = 0;
int pixle_number[points][3];
for(int loop = 0; loop <points;loop++){ // makes the colours
ender++;
                if (sequence == 0){
                r = r + incresing_value;
                if( r == 255 && g == 0){
                    sequence = 1;
                }
            }
                else if (sequence == 1){
                g = g + incresing_value;
                if( r == 255 && g == 255){
                    sequence = 2;
                }
            }
                else if (sequence == 2){
                r = r - incresing_value;
                if( r == 0 && g == 255){
                    sequence = 3;
                }
            }
                else if (sequence == 3){
                b = b + incresing_value;
                if( g == 255 && b == 255){
                    sequence = 4;
                }
            }
                else if (sequence == 4){
                g = g - incresing_value;
                if( g == 0 && b == 255){
                    sequence = 5;
                }
            }
                else if (sequence == 5){
                r = r + incresing_value;
                if( r == 255 && b == 255){
                    sequence = 6;
                }
            }
                else if (sequence == 6){
                b = b - incresing_value;
                if( r == 255 && b == 0){
                    sequence = 7;
                }
            }
            else if (sequence == 8){
                r = r - incresing_value;
                if( r == 0){
                    sequence = 0;
            }

            }
            end_of_colours = loop;
            pixle_number[loop][0] = r; // creating the rgb values.
            pixle_number[loop][1] = g;
            pixle_number[loop][2] = b;
}
*/

//int sizeer;
//sizeer = 1*1920;
initwindow(width,hight,"",-3,-3,false,true);
int ender=1920;
int meme = 1081;
for(int sizeer = 1920/*2073600*/; sizeer <= 2073600;sizeer =sizeer+1920){
        meme--;
        cleardevice();


int *sorting_arr   = new int[sizeer];
int *pixle_cordsy  = new int[sizeer];
int *pixle_cordsx  = new int[sizeer];
int *pixle_colourr = new int[sizeer];
int *pixle_colourg = new int[sizeer];
int *pixle_colourb = new int[sizeer];

float r= 0,g = 0,b = 0;

int sequence = 0;
float incresing_value =0;// 0.001598669;
incresing_value = 0.001598669*meme;
ender=0;
int ee=sizeer;
for(int loop = 0; loop <sizeer;loop++){ // makes the colours
ender++;
                if (sequence == 0){
                r = r + incresing_value;
                if( r >= 255 && g <= 0){
                    sequence = 1;
                }
            }
                else if (sequence == 1){
                g = g + incresing_value;
                if( r >= 255 && g >= 255){
                    sequence = 2;
                }
            }
                else if (sequence == 2){
                r = r - incresing_value;
                if( r <= 0 && g >= 255){
                    sequence = 3;
                }
            }
                else if (sequence == 3){
                b = b + incresing_value;
                if( g >= 255 && b >= 255){
                    sequence = 4;
                }
            }
                else if (sequence == 4){
                g = g - incresing_value;
                if( g <= 0 && b >= 255){
                    sequence = 5;
                }
            }
                else if (sequence == 5){
                r = r + incresing_value;
                if( r >= 255 && b >= 255){
                    sequence = 6;
                }
            }
                else if (sequence == 6){
                b = b - incresing_value;
                if( r >= 255 && b <= 0){
                    sequence = 7;
                }
            }
            else if (sequence == 7){
                r = r - incresing_value;
                if( r <= 0){
                    sequence = 8;

                }
            }
            else if (sequence == 8){
                g = g + incresing_value;
                b = b + incresing_value;
                if( g >= 255){
                    sequence = 9;
                }
            }
            else if (sequence == 9){
                g = g - incresing_value;
                r = r + incresing_value;
                if( g <= 0){
                    sequence = 10;
                }
            }
            else if (sequence == 10){
                g = g + incresing_value;
                if( g >= 255){
                    sequence = 11;
                }
            }
            else if (sequence == 11){
                b = b - incresing_value;
                g = g - incresing_value;
                if( g <= 0){
                    sequence = 12;
                }
            }
            else if (sequence == 12){
                r = r - incresing_value;
                if( r <= 0){
                    sequence = 0;
                    ee = ender;
                    ender = 0;
                }
            }

            pixle_colourr[loop] = r; // creating the rgb values.
            pixle_colourg[loop] = g;
            pixle_colourb[loop] = b;
}
ender = ee;

















int num = 0;
for(int pointsx = 1;pointsx <= 1080&& num<sizeer;pointsx = pointsx + 1){
    for(int pointsy = 1;pointsy <= 1920&& num <sizeer;pointsy = pointsy +1){
        sorting_arr[num] = num;
        pixle_cordsy[num]=pointsx;
        pixle_cordsx[num]=pointsy;
        //putpixel(pointsy,pointsx,COLOR(pixle_colourr[sorting_arr[num]],pixle_colourg[sorting_arr[num]],pixle_colourb[sorting_arr[num]]));
        //printf("%d\n",(num*100)/2073600);
        num++;
    }
}


for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}



int xx = 0;
int yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}
Sleep(1000);


////////////////////////////////////////////////////////////////////////////////////////



















printf("insertion sort:");
int timee = time(NULL);
for(int c = 1; c < sizeer;c++){
    for(int g = c; g >= 1 && sorting_arr[g-1] > sorting_arr[g];g--){
            int temp = sorting_arr[g-1];
            sorting_arr[g-1] =sorting_arr[g];
            sorting_arr[g] = temp;
            putpixel(pixle_cordsx[g],pixle_cordsy[g],COLOR(pixle_colourr[sorting_arr[g]],pixle_colourg[sorting_arr[g]],pixle_colourb[sorting_arr[g]]));
            putpixel(pixle_cordsx[g-1],pixle_cordsy[g-1],COLOR(pixle_colourr[sorting_arr[g-1]],pixle_colourg[sorting_arr[g-1]],pixle_colourb[sorting_arr[g-1]]));

        }
    }

printf(" %d\n",time(NULL) - timee);


{

for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}
 int xx = 0;
 int yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}


}

printf("bubble sort");
timee = time(NULL);
int reduce = 0;
for(int c = 0; c <sizeer-1;c++){
    reduce++;
    for(int g = 0; g <sizeer-reduce;g++){
        if(sorting_arr[g+1] < sorting_arr[g]){
            int temp = sorting_arr[g+1];
            sorting_arr[g+1] =sorting_arr[g];
            sorting_arr[g] = temp;
            putpixel(pixle_cordsx[g],pixle_cordsy[g],COLOR(pixle_colourr[sorting_arr[g]],pixle_colourg[sorting_arr[g]],pixle_colourb[sorting_arr[g]]));
            putpixel(pixle_cordsx[g+1],pixle_cordsy[g+1],COLOR(pixle_colourr[sorting_arr[g+1]],pixle_colourg[sorting_arr[g+1]],pixle_colourb[sorting_arr[g+1]]));
        }
    }
}
printf(" %d\n",time(NULL) - timee);


{
for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}
 xx = 0;
 yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}


}



printf("selection sort");
timee = time(NULL);
for(int insertion_sort = 0;insertion_sort< sizeer;insertion_sort++){
    int temp =sorting_arr[insertion_sort];
    int temp_num;
    for(int l = insertion_sort;l< sizeer;l++){
       if(sorting_arr[l] < temp){
            temp = sorting_arr[l];
            temp_num = l;
       }
    }
    //Sleep(10);
    sorting_arr[temp_num] = sorting_arr[insertion_sort];
    sorting_arr[insertion_sort] = temp;
    putpixel(pixle_cordsx[temp_num],pixle_cordsy[temp_num],COLOR(pixle_colourr[sorting_arr[temp_num]],pixle_colourg[sorting_arr[temp_num]],pixle_colourb[sorting_arr[temp_num]]));
    putpixel(pixle_cordsx[insertion_sort],pixle_cordsy[insertion_sort],COLOR(pixle_colourr[sorting_arr[insertion_sort]],pixle_colourg[sorting_arr[insertion_sort]],pixle_colourb[sorting_arr[insertion_sort]]));


}
printf(" %d\n",time(NULL) - timee);
{
for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}
 xx = 0;
 yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}

}




printf("shell sort");
timee = time(NULL);
int i;
    int nn = sizeer;
    for (int gap = nn/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < nn; i += 1)
        {
            int temp = sorting_arr[i];
            int place = i;
            int j;
            for (j = i; j >= gap && sorting_arr[j - gap] > temp; j -= gap){
                sorting_arr[j] = sorting_arr[j - gap];
                putpixel(pixle_cordsx[j],pixle_cordsy[j],COLOR(pixle_colourr[sorting_arr[j]],pixle_colourg[sorting_arr[j]],pixle_colourb[sorting_arr[j]]));
            }
            sorting_arr[j] = temp;
            putpixel(pixle_cordsx[j],pixle_cordsy[j],COLOR(pixle_colourr[sorting_arr[j]],pixle_colourg[sorting_arr[j]],pixle_colourb[sorting_arr[j]]));

        }

//print(pixle_number,sorting_array,points,sorting_line);

    }
printf(" %d\n",time(NULL) - timee);














{
for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}
 xx = 0;
 yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}
}






printf("odd even sort");
timee = time(NULL);
 i =0;
int flag,temp;
 do{
  flag=0;
  //For Even Sort
  for(i=0;i<sizeer-1;i+=2)
  {
   //Swapping
   if(sorting_arr[i]>sorting_arr[i+1])
   {
    temp=sorting_arr[i];
    sorting_arr[i]=sorting_arr[i+1];
    sorting_arr[i+1]=temp;
        flag=1;
        putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
        putpixel(pixle_cordsx[i+1],pixle_cordsy[i+1],COLOR(pixle_colourr[sorting_arr[i+1]],pixle_colourg[sorting_arr[i+1]],pixle_colourb[sorting_arr[i+1]]));
   }
  }
  //For Odd Sort
  for(i=1;i<sizeer-1;i+=2)
  {
   //Swapping
   if(sorting_arr[i]>sorting_arr[i+1])
   {

    temp=sorting_arr[i];
    sorting_arr[i]=sorting_arr[i+1];
    sorting_arr[i+1]=temp;
        flag=1;
        putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
        putpixel(pixle_cordsx[i+1],pixle_cordsy[i+1],COLOR(pixle_colourr[sorting_arr[i+1]],pixle_colourg[sorting_arr[i+1]],pixle_colourb[sorting_arr[i+1]]));
   }
  }
 }while(flag != 0);


printf(" %d\n",time(NULL) - timee);







{
for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}
 xx = 0;
 yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}


}








    printf("gnome sort");
    timee = time(NULL);
    i=1;
    int j=2, t;
    # define swap(i, j) { t = sorting_arr[i]; sorting_arr[i] = sorting_arr[j]; sorting_arr[j] = t; }
    while(i < sizeer) {
        if (sorting_arr[i - 1] > sorting_arr[i]) {
            swap(i - 1, i);
            putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
            putpixel(pixle_cordsx[i-1],pixle_cordsy[i-1],COLOR(pixle_colourr[sorting_arr[i-1]],pixle_colourg[sorting_arr[i-1]],pixle_colourb[sorting_arr[i-1]]));
        if (--i) continue;
        }
        i = j++;
    }

printf(" %d\n",time(NULL) - timee);














{
for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}
 xx = 0;
 yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}


}









//If it's less than 2 long, just return it as sorting isn't really needed...


    printf("pancake sort");
    timee = time(NULL);
    int a,max_num_pos,moves;
    moves=0;

    for(i=sizeer;i>1;i--)
    {
        //Find position of the max number in pos(0) to pos(i)
        max_num_pos=0;
        for(a=0;a<i;a++)
        {
            if(sorting_arr[a]<sorting_arr[max_num_pos])
                max_num_pos=a;
        }

        if(max_num_pos==i-1)
            //It's where it need to be, skip
            continue;


        //Get the found max number to the beginning of the list (unless it already is)
        if(max_num_pos)
        {
            moves++;
            do_flip(sorting_arr, sizeer, max_num_pos+1);
            for(int temp_num = 0;temp_num<sizeer;temp_num++){
                putpixel(pixle_cordsx[temp_num],pixle_cordsy[temp_num],COLOR(pixle_colourr[sorting_arr[temp_num]],pixle_colourg[sorting_arr[temp_num]],pixle_colourb[sorting_arr[temp_num]]));}
        }


        //And then move it to the end of the range we're working with (pos(0) to pos(i))
        moves++;
        do_flip(sorting_arr, sizeer, i);

        //Then everything above list[i-1] is sorted and don't need to be touched

    }
printf(" %d\n",time(NULL) - timee);



{
for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}
 xx = 0;
 yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}


}






    printf("heapsort");
    timee = time(NULL);
    int n = sizeer;
    for (i = (n - 2) / 2; i >= 0; i--) {
        downheap(sorting_arr, n, i);
        for(int k = 0; k<n;k++){
            putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
        }
    }
    for (i = 0; i < n; i++) {
        int t = sorting_arr[n - i - 1];
        sorting_arr[n - i - 1] = sorting_arr[0];
        sorting_arr[0] = t;
        downheap(sorting_arr, n - i - 1, 0);
        for(int k = 0; k<n;k++){
            putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
        }
    }


printf(" %d\n",time(NULL) - timee);


{
for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}
 xx = 0;
 yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}


}







 printf("Comb sort");
 timee = time(NULL);
 int gap, swapped = 1;
  double tempp;

  gap = sizeer;
  while (gap > 1 || swapped == 1)
  {
    gap = gap * 10 / 13;
    if (gap == 9 || gap == 10) gap = 11;
    if (gap < 1) gap = 1;
    swapped = 0;
    for (i = 0, j = gap; j < sizeer; i++, j++)
    {
      if (sorting_arr[i] > sorting_arr[j])
      {
        tempp = sorting_arr[i];
        sorting_arr[i] = sorting_arr[j];
        sorting_arr[j] = tempp;
        putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
        putpixel(pixle_cordsx[j],pixle_cordsy[j],COLOR(pixle_colourr[sorting_arr[j]],pixle_colourg[sorting_arr[j]],pixle_colourb[sorting_arr[j]]));
        swapped = 1;
      }
    }
  }

printf(" %d\n",time(NULL) - timee);


{
for(int loop = 0; loop <sizeer;loop++){
    int temp = sorting_arr[loop];
    int rng = (rand()*rand())%sizeer;
    sorting_arr[loop] =sorting_arr[rng];
    sorting_arr[rng] = temp;
}
 xx = 0;
 yy = 1;
for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));
}


}



printf("StoogeSort");
timee = time(NULL);
   StoogeSort(sorting_arr, 0, sizeer-1);
   for(int k = 0; k<n;k++){
        putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
    }

printf(" %d\n",time(NULL) - timee);


















//done




}



















Sleep(10000);





}
void StoogeSort(int a[], int i, int j) {
   int t;

   if (a[j] < a[i]) SWAP(a[i], a[j]);
   if (j - i > 1)
   {
       t = (j - i + 1) / 3;
       StoogeSort(a, i, j - t);
       StoogeSort(a, i + t, j);
       StoogeSort(a, i, j - t);
   }
}
int max (int *a, int n, int i, int j, int k) {
    int m = i;
    if (j < n && a[j] > a[m]) {
        m = j;
    }
    if (k < n && a[k] > a[m]) {
        m = k;
    }
    return m;
}
void downheap (int *a, int n, int i) {
    while (1) {
        int j = max(a, n, i, 2 * i + 1, 2 * i + 2);
        if (j == i) {
            break;
        }
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i = j;
    }
}
void do_flip(int *list, int length, int num){
    int swap;
    int i=0;
    for(i;i<--num;i++)
    {
        swap=list[i];
        list[i]=list[num];
        list[num]=swap;
    }
}




/*
int *temparr  = new int[sizeer];
int sort_group =2;
int hhh =0;

do{

    int hold =0;
    int enderer = 0;
    for(int loop = 0; loop < sizeer;loop= loop+sort_group){
        hold =0;
        for(int k = loop; k < loop+sort_group&& k < sizeer;k++){

            if(sorting_arr[k] > sorting_arr[k+1]){

                int temp = sorting_arr[k];
                sorting_arr[k] = sorting_arr[k+1];
                sorting_arr[k+1] = temp;
                k = loop;
                putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
                putpixel(pixle_cordsx[k+1],pixle_cordsy[k+1],COLOR(pixle_colourr[sorting_arr[k+1]],pixle_colourg[sorting_arr[k+1]],pixle_colourb[sorting_arr[k+1]]));
            }
        }
    }
    for(int counter = 0; counter < sizeer;counter++){
        if(sorting_arr[counter] == counter){
            enderer++;
           // printf("%d ",sorting_arr[counter] );
        }
    }
    if (enderer >= sizeer-1){
            hhh =2;
        }
    if(hhh == 0){
    //printf("\t%d\n",enderer);
    int oof = 0;
    int carry = 0;
    for(int sweep = 0; sweep< sizeer-sort_group-sort_group&& hhh == 0;){
        oof = 0;
        for(int overlap = sweep;overlap <sweep+sort_group&&sweep+sort_group< sizeer-sort_group-1&&overlap+1+oof <sizeer;overlap++){
            temparr[overlap+oof]= sorting_arr[overlap];
            //sweep++;
            temparr[overlap+1+oof]= sorting_arr[overlap+sort_group];
            oof++;
        }
        sweep = sort_group+sort_group+sweep;
        carry = sweep;
    }

    for(;carry < sizeer&& hhh == 0; carry++){
        temparr[carry]= sorting_arr[carry];
    }
    xx = 0;
    yy = 1;
    for(int sweep = 0; sweep< sizeer&& hhh == 0;sweep++){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;
        }
        sorting_arr[sweep]=temparr[sweep];
        putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[sweep]],pixle_colourg[sorting_arr[sweep]],pixle_colourb[sorting_arr[sweep]]));
    }
    }
    sort_group = sort_group + sort_group;
}while(hhh == 0);
*/
//







