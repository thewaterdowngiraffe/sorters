
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
#define SWAP(r,s)  do{  t=r; r=s; s=t; } while(0)
#define swape(i, j) { t = sorting_arr[i]; sorting_arr[i] = sorting_arr[j]; sorting_arr[j] = t; }
#define swap(r,s)  do{ int t=r; r=s; s=t; } while(0)
void bitonicSort(int a[],int low, int cnt, int dir);
void bitonicMerge(int a[], int low, int cnt, int dir);
void compAndSwap(int a[], int i, int j, int dir);
void sort(int a[], int N, int up);
void quicksort(int *A, int len,int sizeer,int sorting_arr[],int pixle_colourr[],int pixle_colourg[],int pixle_colourb[],int pixle_cordsx[],int pixle_cordsy[]);
void StoogeSort(int a[], int i, int j,int sizeer,int sorting_arr[],int pixle_colourr[],int pixle_colourg[],int pixle_colourb[],int pixle_cordsx[],int pixle_cordsy[]);
void do_flip(int *list, int length, int num);
void downheap (int *a, int n, int i);
int max (int *a, int n, int i, int j, int k);
int draw_random(int sizeer,int sorting_arr[],int pixle_colourr[],int pixle_colourg[],int pixle_colourb[]);
int draw_line(int g,int sorting_arr[],int pixle_colourr[],int pixle_colourg[],int pixle_colourb[]);



int main(){
int time_out_seconds = 60;
int base_size= 0;
int max_size = 0;
int increasing_value =0;
printf("how many seconds before killing the sorter:");
scanf("%d",&time_out_seconds);
printf("inital array size(normal is :1920):");
scanf("%d",&base_size);
printf("max array size (normal is :2073600):");
scanf("%d",&max_size);
printf("increasing array size (normal is :1920):");
scanf("%d",&increasing_value);








    FILE * excel;
    excel = fopen("pixle_sorter_times.csv","w+");
    fprintf(excel,"array size,wave sort,optimized wave sort,chaos sort,shaker sort,selection sort,Comb sort,cycle sort,wave sort,shell sort,odd even sort,pancake sort,heap sort,insertion sort,bubble sort,\n");
    //randomized stuff
    int width = 1920, hight = 1080;
    initwindow(width,hight,"",-3,-3,false,true);
    int ender=1920;
    int rounds= 0;
    int optimized_wave = 0,chaos_sort = 0,shaker_sort = 0,selection_sort= 0,Comb_sort = 0,cycle_sort = 0,wave_sort=0,shell_sort=0,odd_even_sort=0,gnome_sort = 0,pancake_sort = 0,heapsort = 0,insertion_sort = 0,bubble_sort = 0;




    for(int sizeer = base_size; sizeer <=max_size;sizeer =sizeer+increasing_value){
        rounds++;
        printf("\n_________round %d___________\n",rounds);
        cleardevice();
        int sequence = 0;
        int *sorting_arr   = new int[sizeer];
        int *pixle_cordsy  = new int[sizeer];
        int *pixle_cordsx  = new int[sizeer];
        int *pixle_colourr = new int[sizeer];
        int *pixle_colourg = new int[sizeer];
        int *pixle_colourb = new int[sizeer];
        float r= 255,g = 255,b = 255;
        float incresing_value =1.0023365162;//4845/sizeer;// 0.0023365162;
        //incresing_value = 0.0023365162;
        ender=0;
        int ee=sizeer;
        for(int loop = 0; loop <sizeer;loop++){ // makes the colours
        ender++;
                        if (sequence == 0){
                            r = r - incresing_value;
                            if( r <= 0){
                                    r=0;
                                sequence = 1;
                            }
                        }
                        else if (sequence == 1){
                            g = g - incresing_value;
                            if(g <= 0){
                                    g=0;
                                sequence = 2;
                            }
                        }
                        else if (sequence == 2){
                            b = b - incresing_value;
                            if(b <= 0){
                                    b=0;
                                sequence = 3;
                            }
                        }
                        else if (sequence == 3){
                            r = r + incresing_value;
                            if( r >= 255 && g <= 0){
                                r = 255;
                                sequence = 4;
                            }
                        }
                        else if (sequence == 4){
                        g = g + incresing_value;
                        if( g >= 255){
                            sequence = 5;
                            g=255;
                        }
                    }
                        else if (sequence == 5){
                        r = r - incresing_value;
                        if( r <= 0 ){
                                r=0;
                            sequence = 6;
                        }
                    }
                        else if (sequence == 6){
                        b = b + incresing_value;
                        if( g >= 255 && b >= 255){
                                b=255;
                            sequence = 7;
                        }
                    }
                        else if (sequence == 7){
                        g = g - incresing_value;
                        if( g <= 0 && b >= 255){
                            g =0;
                            sequence = 8;
                        }
                    }
                        else if (sequence == 8){
                        r = r + incresing_value;
                        if( r >= 255 && b >= 255){
                                r = 255;
                            sequence = 9;
                        }
                    }
                        else if (sequence == 9){
                        b = b - incresing_value;
                        if( r >= 255 && b <= 0){
                                b = 0;
                            sequence = 10;
                        }
                    }
                        else if (sequence == 10){
                        r = r - incresing_value;
                        if( r <= 0){
                                r = 0;
                            sequence = 11;
                        }
                    }
                        else if (sequence == 11){
                        g = g + incresing_value;
                        b = b + incresing_value;
                        if( g >= 255){
                            g = 255;
                            b = 255;
                            sequence = 12;
                        }
                    }
                        else if (sequence == 12){
                        g = g - incresing_value;
                        r = r + incresing_value;
                        if( g <= 0){
                            g = 0;
                            r = 255;
                            sequence = 13;
                        }
                    }
                        else if (sequence == 13){
                        g = g + incresing_value;
                        if( g >= 255){
                            g = 255;
                            sequence = 14;
                        }
                    }
                        else if (sequence == 14){
                        b = b - incresing_value;
                        g = g - incresing_value;
                        if( g <= 0){
                            g = 0;
                            b = 0;
                            sequence = 15;
                        }
                    }
                        else if (sequence == 15){
                        r = r - incresing_value;
                        if( r <= 0){
                            r = 0;
                            sequence = 16;
                        }
                    }
                        else if (sequence == 16){
                        r = r + incresing_value;
                        if( r >= 255){
                            r = 255;
                            sequence = 17;
                        }
                    }
                        else if (sequence == 17){
                        g = g + incresing_value;
                        if( g >= 255){
                            g = 255;
                            sequence = 18;
                        }
                    }
                        else if (sequence == 18){
                        b = b + incresing_value;
                        if( b >= 255){
                            b = 255;
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
                num++;}}
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
        fprintf(excel,"%d,",sizeer);


        ////////////////////////////////////////////////////////////////////////////////////////




if(wave_sort==0){
        draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
        printf("wave sort:"); // i made this one.
        int timee = time(NULL);
        for( int rot = 0; rot<sizeer;rot++){
            int temp_x =rot;
            for(int h = rot ; h < sizeer; h++){
                if(sorting_arr[h]<sorting_arr[temp_x]){
                        temp_x = h;
            }}
            int distance =0;
            for(int swaper = rot; temp_x+distance<sizeer&&swaper<temp_x; swaper++){
                if(sorting_arr[swaper]>sorting_arr[temp_x+distance]){
                int shlep = sorting_arr[swaper];
                    sorting_arr[swaper] = sorting_arr[temp_x+distance];
                    sorting_arr[temp_x+distance] = shlep;
                    if(sizeer <= 1920){
                        draw_line(swaper,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        draw_line(temp_x+distance,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[swaper],pixle_cordsy[swaper],COLOR(pixle_colourr[sorting_arr[swaper]],pixle_colourg[sorting_arr[swaper]],pixle_colourb[sorting_arr[swaper]]));
                        putpixel(pixle_cordsx[temp_x+distance],pixle_cordsy[temp_x-distance],COLOR(pixle_colourr[sorting_arr[temp_x-distance]],pixle_colourg[sorting_arr[temp_x-distance]],pixle_colourb[sorting_arr[temp_x-distance]]));
                    }














                }
                distance++;
            }
            if(time(NULL) - timee >time_out_seconds){wave_sort = 1;
                break;}
        }
    printf(" %d\n",time(NULL) - timee);
    fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee >time_out_seconds){wave_sort = 1;}
    }
fprintf(excel,",");

if(optimized_wave == 0){
draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
printf("optimized wave sort:"); // i made this one.
        int timee = time(NULL);
        for( int rot = 0; rot<sizeer;rot++){
            int temp_x =rot;
            for(int h = rot ; h < sizeer; h++){
                if(sorting_arr[h]<sorting_arr[temp_x]){
                        temp_x = h;}}
            int distance =0;
            for(int swaper = rot; temp_x+distance<sizeer; swaper++){
                if(sorting_arr[swaper]>sorting_arr[temp_x+distance]){
                    int shlep = sorting_arr[swaper];
                    sorting_arr[swaper] = sorting_arr[temp_x+distance];
                    sorting_arr[temp_x+distance] = shlep;
                    if(sizeer <= 1920){
                        draw_line(swaper,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        draw_line(temp_x+distance,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[swaper],pixle_cordsy[swaper],COLOR(pixle_colourr[sorting_arr[swaper]],pixle_colourg[sorting_arr[swaper]],pixle_colourb[sorting_arr[swaper]]));
                        putpixel(pixle_cordsx[temp_x+distance],pixle_cordsy[temp_x-distance],COLOR(pixle_colourr[sorting_arr[temp_x-distance]],pixle_colourg[sorting_arr[temp_x-distance]],pixle_colourb[sorting_arr[temp_x-distance]]));
                    }
                }
                distance++;}
            if(time(NULL) - timee > time_out_seconds){optimized_wave = 1;
            break;}
            }
        printf(" %d\n",time(NULL) - timee);
        fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){optimized_wave = 1;}
    }
fprintf(excel,",");

if(chaos_sort == 0){
draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
printf("chaos sort:"); // i made this one.
        int timee = time(NULL);
        for( int rot = 0; rot<sizeer;rot++){
            int temp_x =rot;
            for(int h = rot ; h < sizeer; h++){
                if(sorting_arr[h]<sorting_arr[temp_x]){
                        temp_x = h;
            }}
            int distance =0;
            for(int swaper = rot; temp_x+distance<sizeer&&temp_x+distance >swaper; swaper++){
                if(sorting_arr[swaper]>sorting_arr[temp_x+distance]){
                    int shlep = sorting_arr[swaper];
                    sorting_arr[swaper] = sorting_arr[temp_x+distance];
                    sorting_arr[temp_x+distance] = shlep;
                    if(sizeer <= 1920){
                        draw_line(swaper,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        draw_line(temp_x+distance,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[swaper],pixle_cordsy[swaper],COLOR(pixle_colourr[sorting_arr[swaper]],pixle_colourg[sorting_arr[swaper]],pixle_colourb[sorting_arr[swaper]]));
                        putpixel(pixle_cordsx[temp_x+distance],pixle_cordsy[temp_x-distance],COLOR(pixle_colourr[sorting_arr[temp_x-distance]],pixle_colourg[sorting_arr[temp_x-distance]],pixle_colourb[sorting_arr[temp_x-distance]]));
                    }




                    distance++;
                }
            }
            if(time(NULL) - timee > time_out_seconds){chaos_sort = 1;
                break;};
        }
        printf(" %d\n",time(NULL) - timee);
        fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){chaos_sort = 1;}
    }
fprintf(excel,",");

if(shaker_sort == 0){
draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
printf("shaker sort:"); // i made this one.
        int timee = time(NULL);
        for( int rot = 0; rot<sizeer;rot++){

                int temp_x =rot;
            for(int h = rot ; h < sizeer-rot; h++){
                if(sorting_arr[h]<sorting_arr[temp_x]){
                        temp_x = h;
            }}
            int distance =0;
            for(int swaper = rot; temp_x+distance<sizeer&&temp_x+distance >swaper; swaper++){
                if(sorting_arr[swaper]>sorting_arr[temp_x+distance]){
                    int shlep = sorting_arr[swaper];
                    sorting_arr[swaper] = sorting_arr[temp_x+distance];
                    sorting_arr[temp_x+distance] = shlep;
                    if(sizeer <= 1920){
                        draw_line(swaper,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        draw_line(temp_x+distance,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[swaper],pixle_cordsy[swaper],COLOR(pixle_colourr[sorting_arr[swaper]],pixle_colourg[sorting_arr[swaper]],pixle_colourb[sorting_arr[swaper]]));
                        putpixel(pixle_cordsx[temp_x+distance],pixle_cordsy[temp_x-distance],COLOR(pixle_colourr[sorting_arr[temp_x-distance]],pixle_colourg[sorting_arr[temp_x-distance]],pixle_colourb[sorting_arr[temp_x-distance]]));
                    }
                }
                distance++;
            }

             temp_x =sizeer-rot-1;
            for(int h = sizeer-rot -1; h >rot; h--){
                if(sorting_arr[h]>sorting_arr[temp_x]){
                        temp_x = h;
            }}
             distance =0;
            for(int swaper = sizeer-rot-1; temp_x-distance>=0&&swaper >=0; swaper--){
                if(sorting_arr[swaper]<sorting_arr[temp_x-distance]){
                    int shlep = sorting_arr[swaper];
                    sorting_arr[swaper] = sorting_arr[temp_x-distance];
                    sorting_arr[temp_x-distance] = shlep;


                    if(sizeer <= 1920){
                        draw_line(swaper,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        draw_line(temp_x-distance,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[swaper],pixle_cordsy[swaper],COLOR(pixle_colourr[sorting_arr[swaper]],pixle_colourg[sorting_arr[swaper]],pixle_colourb[sorting_arr[swaper]]));
                        putpixel(pixle_cordsx[temp_x-distance],pixle_cordsy[temp_x-distance],COLOR(pixle_colourr[sorting_arr[temp_x-distance]],pixle_colourg[sorting_arr[temp_x-distance]],pixle_colourb[sorting_arr[temp_x-distance]]));
                    }

                }
                distance++;
            }
           if(time(NULL) - timee > time_out_seconds){shaker_sort = 1;
                break;}
        }
        printf(" %d\n",time(NULL) - timee);
        fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){shaker_sort = 1;}
    }
fprintf(excel,",");

if(selection_sort ==0){
draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
        printf("selection sort");
        int timee = time(NULL);
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
            if(sizeer <= 1920){
                draw_line(temp_num,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                draw_line(insertion_sort,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
            }
            else if(sizeer > 1920){
                putpixel(pixle_cordsx[temp_num],pixle_cordsy[temp_num],COLOR(pixle_colourr[sorting_arr[temp_num]],pixle_colourg[sorting_arr[temp_num]],pixle_colourb[sorting_arr[temp_num]]));
                putpixel(pixle_cordsx[insertion_sort],pixle_cordsy[insertion_sort],COLOR(pixle_colourr[sorting_arr[insertion_sort]],pixle_colourg[sorting_arr[insertion_sort]],pixle_colourb[sorting_arr[insertion_sort]]));
            }



        if(time(NULL) - timee > time_out_seconds){selection_sort = 1;
                break;}
        }
        printf(" %d\n",time(NULL) - timee);
        fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){selection_sort = 1;}
    }
fprintf(excel,",");

if(shell_sort == 0){////////////////////
        draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
        printf("shell sort");
        int timee = time(NULL);
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

            if(time(NULL) - timee > time_out_seconds){shell_sort = 1;
                break;}
            }
    printf(" %d\n",time(NULL) - timee);
    fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){shell_sort = 1;}
    }
fprintf(excel,",");

if(odd_even_sort == 0){
        draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
        printf("odd even sort");
        int timee = time(NULL);
         int i =0;
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
                if(sizeer <= 1920){
                    draw_line(i,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    draw_line(i+1,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                }
                else if(sizeer > 1920){
                    putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
                    putpixel(pixle_cordsx[i-1],pixle_cordsy[i-1],COLOR(pixle_colourr[sorting_arr[i-1]],pixle_colourg[sorting_arr[i-1]],pixle_colourb[sorting_arr[i-1]]));
                }
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
                if(sizeer <= 1920){
                    draw_line(i,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    draw_line(i+1,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                }
                else if(sizeer > 1920){
                    putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
                    putpixel(pixle_cordsx[i-1],pixle_cordsy[i-1],COLOR(pixle_colourr[sorting_arr[i-1]],pixle_colourg[sorting_arr[i-1]],pixle_colourb[sorting_arr[i-1]]));
                }

           }
          }
          if(time(NULL) - timee > time_out_seconds){odd_even_sort = 1;
                break;}
         }while(flag != 0);
    printf(" %d\n",time(NULL) - timee);
    fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){odd_even_sort = 1;}
    }
fprintf(excel,",");



if(gnome_sort==0){
        draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
            printf("gnome sort");
            int timee = time(NULL);
            int i=1;
            int j=2, t;
            while(i < sizeer) {
                if (sorting_arr[i - 1] > sorting_arr[i]) {
                    swape(i - 1, i);
                    if(sizeer <= 1920){
                        draw_line(i,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        draw_line(i-1,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
                        putpixel(pixle_cordsx[i-1],pixle_cordsy[i-1],COLOR(pixle_colourr[sorting_arr[i-1]],pixle_colourg[sorting_arr[i-1]],pixle_colourb[sorting_arr[i-1]]));
                    }

                if (--i) continue;
                }
                i = j++;

                if(time(NULL) - timee > time_out_seconds){gnome_sort = 1;
                break;}
            }

        printf(" %d\n",time(NULL) - timee);
        fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){gnome_sort = 1;}
    }
fprintf(excel,",");

//fix drawing **
if(pancake_sort == 0){
        draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
            printf("pancake sort");
            int timee = time(NULL);
            int a,max_num_pos,moves;
            moves=0;

            for(int i=sizeer;i>1;i--)
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
                if(time(NULL) - timee > time_out_seconds){pancake_sort = 1;
                break;}

            }
        printf(" %d\n",time(NULL) - timee);
        fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){pancake_sort = 1;}
    }
fprintf(excel,",");;

//fix drawing ***
if(heapsort == 0){
    draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
            printf("heapsort");
            int timee = time(NULL);
            int n = sizeer;
            for (int i = (n - 2) / 2; i >= 0; i--) {
                downheap(sorting_arr, n, i);
                for(int k = 0; k<n;k++){
                    putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
                }
                if(time(NULL) - timee > time_out_seconds){heapsort = 1;
                break;}
            }
            for (int i = 0; i < n; i++) {
                int t = sorting_arr[n - i - 1];
                sorting_arr[n - i - 1] = sorting_arr[0];
                sorting_arr[0] = t;
                downheap(sorting_arr, n - i - 1, 0);
                for(int k = 0; k<n;k++){
                    putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
                }
                if(time(NULL) - timee > time_out_seconds){heapsort = 1;
                break;}
            }


                printf(" %d\n",time(NULL) - timee);
        fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){heapsort = 1;}
    }
fprintf(excel,",");


if(Comb_sort == 0){
    draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
         printf("Comb sort");
         int timee = time(NULL);
         int gap, swapped = 1;
          double tempp;
        int j =0;
          gap = sizeer;
          while (gap > 1 || swapped == 1)
          {
            gap = gap * 10 / 13;
            if (gap == 9 || gap == 10) gap = 11;
            if (gap < 1) gap = 1;
            swapped = 0;
            for (int i = 0, j = gap; j < sizeer; i++, j++)
            {
              if (sorting_arr[i] > sorting_arr[j])
              {
                tempp = sorting_arr[i];
                sorting_arr[i] = sorting_arr[j];
                sorting_arr[j] = tempp;
                putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
                putpixel(pixle_cordsx[j],pixle_cordsy[j],COLOR(pixle_colourr[sorting_arr[j]],pixle_colourg[sorting_arr[j]],pixle_colourb[sorting_arr[j]]));

                if(sizeer <= 1920){
                        draw_line(i,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        draw_line(j,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
                        putpixel(pixle_cordsx[j],pixle_cordsy[j],COLOR(pixle_colourr[sorting_arr[j]],pixle_colourg[sorting_arr[j]],pixle_colourb[sorting_arr[j]]));
                    }


                swapped = 1;
              }
            }
            if(time(NULL) - timee > time_out_seconds){Comb_sort = 1;
                break;}
          }
        printf(" %d\n",time(NULL) - timee);
        fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){Comb_sort = 1;}
    }
fprintf(excel,",");

            /*
            draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);

            printf("StoogeSort");
            timee = time(NULL);
            StoogeSort(sorting_arr, 0, sizeer-1,sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb,pixle_cordsx,pixle_cordsy);
            printf(" %d\n",time(NULL) - timee);
            */

//

if(cycle_sort == 0){
draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
printf("cycle sort:");
int timee = time(NULL);
// Function sort the array using Cycle sort
    // count number of memory writes
    int writes = 0;
    // traverse array elements and put it to on
    // the right place
    for (int cycle_start = 0; cycle_start <= sizeer- 2; cycle_start++) {
        // initialize item as starting point
        int item = sorting_arr[cycle_start];
        int hold = cycle_start;
        // Find position where we put the item. We basically
        // count all smaller elements on right side of item.
        int pos = cycle_start;
        for (int i = cycle_start + 1; i < sizeer; i++){
            if (sorting_arr[i] < item){
                pos++;}}
        // If item is already in correct position
        if (pos == cycle_start){
            continue;}
        // ignore all duplicate  elements
        while (item == sorting_arr[pos]){
            pos += 1;}
        // put the item to it's right position
        if (pos != cycle_start) {
            if(sizeer <= 1920){

                        draw_line(pos,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        swap(item,sorting_arr[pos]);
                        draw_line(pos,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[pos],pixle_cordsy[pos],COLOR(pixle_colourr[sorting_arr[pos]],pixle_colourg[sorting_arr[pos]],pixle_colourb[sorting_arr[pos]]));
                        swap(item,sorting_arr[pos]);
                        putpixel(pixle_cordsx[pos],pixle_cordsy[pos],COLOR(pixle_colourr[sorting_arr[pos]],pixle_colourg[sorting_arr[pos]],pixle_colourb[sorting_arr[pos]]));
                    }


            writes++;
        }
        // Rotate rest of the cycle
        while (pos != cycle_start) {
            pos = cycle_start;
            // Find position where we put the element
            for (int i = cycle_start + 1; i < sizeer; i++){
                if (sorting_arr[i] < item){
                    pos += 1;}}
            // ignore all duplicate  elements
            while (item == sorting_arr[pos]){
                pos += 1;}
            // put the item to it's right position
            if (item != sorting_arr[pos]) {
                if(sizeer <= 1920){

                        draw_line(pos,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        swap(item,sorting_arr[pos]);
                        draw_line(pos,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[pos],pixle_cordsy[pos],COLOR(pixle_colourr[sorting_arr[pos]],pixle_colourg[sorting_arr[pos]],pixle_colourb[sorting_arr[pos]]));
                        swap(item,sorting_arr[pos]);
                        putpixel(pixle_cordsx[pos],pixle_cordsy[pos],COLOR(pixle_colourr[sorting_arr[pos]],pixle_colourg[sorting_arr[pos]],pixle_colourb[sorting_arr[pos]]));
                    }
                    writes++;














            }
        }
        if(time(NULL) - timee > time_out_seconds){cycle_sort = 1;
                break;}
    }
    printf(" %d\n",time(NULL) - timee);
    fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){cycle_sort = 1;}
    }
fprintf(excel,",");

if(insertion_sort==0){
    draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
    printf("insertion sort:");
    int timee = time(NULL);
        for(int c = 1; c < sizeer;c++){
            for(int g = c; g > 0     && sorting_arr[g-1] > sorting_arr[g];g--){
                    int temp = sorting_arr[g-1];
                    sorting_arr[g-1] =sorting_arr[g];
                    sorting_arr[g] = temp;
                    if(sizeer <= 1920){
                        draw_line(g,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        draw_line(g-1,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else if(sizeer > 1920){
                        putpixel(pixle_cordsx[g],pixle_cordsy[g],COLOR(pixle_colourr[sorting_arr[g]],pixle_colourg[sorting_arr[g]],pixle_colourb[sorting_arr[g]]));
                        putpixel(pixle_cordsx[g+1],pixle_cordsy[g+1],COLOR(pixle_colourr[sorting_arr[g+1]],pixle_colourg[sorting_arr[g+1]],pixle_colourb[sorting_arr[g+1]]));
                    }
                }
                if(time(NULL) - timee > time_out_seconds){insertion_sort = 1;
                break;}
            }

        printf(" %d\n",time(NULL) - timee);
    fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){insertion_sort = 1;}
    }

fprintf(excel,",");






if(bubble_sort==0){
        draw_random(sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
        printf("bubble sort");
        int timee = time(NULL);
        int reduce = 0;
        for(int c = 0; c <sizeer-1;c++){
            reduce++;
            for(int g = 0; g <sizeer-reduce;g++){
                if(sorting_arr[g+1] < sorting_arr[g]){
                    int temp = sorting_arr[g+1];
                    sorting_arr[g+1] =sorting_arr[g];
                    sorting_arr[g] = temp;
                    if(sizeer <= 1920){
                        draw_line(g,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                        draw_line(g+1,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb);
                    }
                    else{
                        putpixel(pixle_cordsx[g],pixle_cordsy[g],COLOR(pixle_colourr[sorting_arr[g]],pixle_colourg[sorting_arr[g]],pixle_colourb[sorting_arr[g]]));
                        putpixel(pixle_cordsx[g+1],pixle_cordsy[g+1],COLOR(pixle_colourr[sorting_arr[g+1]],pixle_colourg[sorting_arr[g+1]],pixle_colourb[sorting_arr[g+1]]));
                    }








                }
            }
            if(time(NULL) - timee > time_out_seconds){bubble_sort = 1;
                break;}
        }
        printf(" %d\n",time(NULL) - timee);
    fprintf(excel,"%d",time(NULL) - timee);
    if(time(NULL) - timee > time_out_seconds){bubble_sort = 1;}
    }
fprintf(excel,",");










/*
  int i;

for(int k = 0; k<sizeer;k++){
                putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
            }
  quicksort(sorting_arr, sizeer,sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb,pixle_cordsx,pixle_cordsy);
  Sleep(1000);
for(int k = 0; k<sizeer;k++){
                putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
            }
Sleep(1000);
*/









    /* C++ Program for Bitonic Sort. Note that this program
   works only when size of input is a power of 2. */


// Driver code
/*
    int check =0;
    for(int x = sizeer; x<=1;x/=2){
        if(x == 1){
            check = 1;
            printf("here");
        }
    }
    if(check == 1){
            for(int k = 0; k<sizeer;k++){
                putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
            }
    int up = 1;   // means sort in ascending order
    sort(sorting_arr, sizeer, up);

            for(int k = 0; k<sizeer;k++){
                putpixel(pixle_cordsx[k],pixle_cordsy[k],COLOR(pixle_colourr[sorting_arr[k]],pixle_colourg[sorting_arr[k]],pixle_colourb[sorting_arr[k]]));
            }
    }
    */
    fprintf(excel,",\n");
    if(optimized_wave != 0&&chaos_sort != 0&&shaker_sort != 0&&selection_sort != 0&&Comb_sort != 0&&cycle_sort != 0&&wave_sort!=0&&shell_sort!=0&&odd_even_sort!=0&&gnome_sort != 0&&pancake_sort != 0&&heapsort != 0&&insertion_sort != 0&&bubble_sort != 0){
        break;
    }

        }

    Sleep(1000);
    fclose(excel);
    Sleep(1000);
    system("start pixle_sorter_times.csv");
}


int draw_line(int g,int sorting_arr[],int pixle_colourr[],int pixle_colourg[],int pixle_colourb[]){
            setcolor(BLACK);
            line(g+1,0,g+1,1080);
            setcolor(COLOR(pixle_colourr[sorting_arr[g]],pixle_colourg[sorting_arr[g]],pixle_colourb[sorting_arr[g]]));
            line(g+1,1080,g+1,sorting_arr[g]/2);

}











void quicksort(int A[], int len,int sizeer,int sorting_arr[],int pixle_colourr[],int pixle_colourg[],int pixle_colourb[],int pixle_cordsx[],int pixle_cordsy[]) {
  if (len < 2) return;

  int pivot = sorting_arr[len / 2];

  int i, j;
  for (i = 0, j = len - 1; ; i++, j--) {
    while (sorting_arr[i] < pivot) i++;
    while (sorting_arr[j] > pivot) j--;

    if (i >= j) break;
    int temp = A[i];
    sorting_arr[i]     =sorting_arr[j];
    sorting_arr[j]     = temp;

    putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
    putpixel(pixle_cordsx[j],pixle_cordsy[j],COLOR(pixle_colourr[sorting_arr[j]],pixle_colourg[sorting_arr[j]],pixle_colourb[sorting_arr[j]]));

  }

  quicksort(sorting_arr, i,sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb,pixle_cordsx,pixle_cordsy);
  quicksort(sorting_arr + i, len - i,sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb,pixle_cordsx,pixle_cordsy);
}

void sort(int a[], int N, int up){
    bitonicSort(a,0, N, up);
}
/*The parameter dir indicates the sorting direction, ASCENDING
   or DESCENDING; if (a[i] > a[j]) agrees with the direction,
   then a[i] and a[j] are interchanged.*/
void compAndSwap(int a[], int i, int j, int dir){
    if (dir==(a[i]>a[j]))
        swap(a[i],a[j]);
}
/*It recursively sorts a bitonic sequence in ascending order,
  if dir = 1, and in descending order otherwise (means dir=0).
  The sequence to be sorted starts at index position low,
  the parameter cnt is the number of elements to be sorted.*/
void bitonicMerge(int a[], int low, int cnt, int dir){
    if (cnt>1)
    {
        int k = cnt/2;
        for (int i=low; i<low+k; i++){
            compAndSwap(a, i, i+k, dir);}
        bitonicMerge(a, low, k, dir);
        bitonicMerge(a, low+k, k, dir);
    }
}
/* This function first produces a bitonic sequence by recursively
    sorting its two halves in opposite sorting orders, and then
    calls bitonicMerge to make them in the same order */
void bitonicSort(int a[],int low, int cnt, int dir){
    if (cnt>1)
    {
        int k = cnt/2;
        // sort in ascending order since dir here is 1
        bitonicSort(a, low, k, 1);
        // sort in descending order since dir here is 0
        bitonicSort(a, low+k, k, 0);
        // Will merge wole sequence in ascending order
        // since dir=1.
        bitonicMerge(a,low, cnt, dir);
    }
}
void StoogeSort(int a[], int i, int j,int sizeer,int sorting_arr[],int pixle_colourr[],int pixle_colourg[],int pixle_colourb[],int pixle_cordsx[],int pixle_cordsy[]) {
    int t;
    if (a[j] < a[i]) SWAP(a[i], a[j]);
    putpixel(pixle_cordsx[j],pixle_cordsy[j],COLOR(pixle_colourr[sorting_arr[j]],pixle_colourg[sorting_arr[j]],pixle_colourb[sorting_arr[j]]));
    putpixel(pixle_cordsx[i],pixle_cordsy[i],COLOR(pixle_colourr[sorting_arr[i]],pixle_colourg[sorting_arr[i]],pixle_colourb[sorting_arr[i]]));
    if (j - i > 1)
    {
        t = (j - i + 1) / 3;
        StoogeSort(a, i, j - t,sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb,pixle_cordsx,pixle_cordsy);
        StoogeSort(a, i + t, j,sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb,pixle_cordsx,pixle_cordsy);
        StoogeSort(a, i, j - t,sizeer,sorting_arr,pixle_colourr,pixle_colourg,pixle_colourb,pixle_cordsx,pixle_cordsy);
    }
}
void downheap (int *a, int n, int i){
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
int draw_random(int sizeer,int sorting_arr[],int pixle_colourr[],int pixle_colourg[],int pixle_colourb[]){
    srand(sizeer);
    for(int loop = 0; loop <sizeer;loop++){
        int temp = sorting_arr[loop];
        int rng = (rand()*rand())%sizeer;
        sorting_arr[loop] =sorting_arr[rng];
        sorting_arr[rng] = temp;}
    if(sizeer >1920){
    int xx = 0;
    int yy = 1;
    for(int pointsx = 0;pointsx < sizeer;pointsx = pointsx + 1){
        xx++;
        if(xx > 1920){
            xx=1;
            yy++;}
    putpixel(xx,yy,COLOR(pixle_colourr[sorting_arr[pointsx]],pixle_colourg[sorting_arr[pointsx]],pixle_colourb[sorting_arr[pointsx]]));}}
    else{
        for(int g = 0;g<sizeer;g++){
            setcolor(BLACK);
            line(g+1,0,g+1,1080);
            setcolor(COLOR(pixle_colourr[sorting_arr[g]],pixle_colourg[sorting_arr[g]],pixle_colourb[sorting_arr[g]]));
            line(g+1,1080,g+1,sorting_arr[g]/2);
        }
    }



}

int max (int *a, int n, int i, int j, int k){
    int m = i;
    if (j < n && a[j] > a[m]) {
        m = j;
    }
    if (k < n && a[k] > a[m]) {
        m = k;
    }
    return m;
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







