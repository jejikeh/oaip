#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string.h>

using namespace std;
int main(){
    int n;
    int puts(const char *string);
    char *strncpy(char *dest, const char *src, size_t n);
    char *strchr(const char *string, int c);
    char *gets(char *buffer);
    size_t strcspn(const char *str, const char *charset);
    char * strcat( char * dst, const char * src);
    char * strstr(const char *str, const char *substr);
    char * strtok(char * string, const char * charset);


    char str[100] = "";
    std::cout << "Input a string : ";
    gets(str);
    std::cout << "1 : ";


    // 1

    if ( strlen(str) > 10 ){
        char dst[10] = "";
        strncpy(dst,str,6);
        puts(dst);
    }else {
        char o[10] = "o";
        char dst[12] = "";
        strncpy(dst,str,strlen(str));
        for(int i = 0; i < 14 - strlen(str); i++){
            strcat(dst,o);
        }
        puts(dst);
    }

    std::cout << "\n";

    // 2

    std::cout << "2 : ";
    int sum = 0;
    for( int i = 0; str[i] != 0; i++){
        char *n1 = "1"; char *n2 = "2"; char *n3 = "3";
        char *n4 = "4"; char *n5 = "5"; char *n6 = "6";
        char *n7 = "7"; char *n8 = "8"; char *n9 = "9";
        if( str[i] == *n1 || str[i] == *n2 || str[i] == *n3 || str[i] == *n4 ||  str[i] == *n5 ||  str[i] == *n6 ||  str[i] == *n7 ||  str[i] == *n8 ||  str[i] == *n9 ){
            int x = str[i] - 48;
            sum += x;
        }
    }
    std::cout << sum;

    std::cout << "\n";


    //3 

    std::cout << "3 : ";

    for( int i = 0; str[i] != 0; i++){
        char *_space = " ";
        if(str[i] == *_space && str[i] == str[i-1]){
            continue;
        }else {
            std::cout << str[i];
        }
    }
    std::cout << "\n";

    //4 

    std::cout << "4 : \n";
    
    for( int i = 0; str[i] != 0; i++){
        char n = str[i];
        int r_t = 0;
        for(int t = 0;str[t] != 0; t++){
            if (n == str[t]){
                r_t++;
            }
        }
        std::cout << "  " << n << " : " << r_t << endl;
    }

    std::cout << "\n";

    // 5 

    char world[100];
    std::cout << "Input a world : ";
    gets(world);

    char *str_n = strtok(str," \t");
    unsigned num = 0;
    for(int i = 0; str[i] != 0; i++){
        for(int x = 0; world[x] != 0; x++){
            if(str[i] == world[x]){
                i++;
                //std::cout << world[x];
                num++;
                continue;
            } else {
                i++;
            }
        }
    }
    std::cout << num/strlen(world);

    
}



