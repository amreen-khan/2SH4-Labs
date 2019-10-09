#include <stdio.h>
#include <stdlib.h>

//double print_vector(double array[], int size);
//double add_vectors(double arr1[], double arr2[], double arr3[], int size);
//double scalar_prod(double arr1[], double arr2[], double arr3[], int size);
//double norm2(double arr1[], double prod, int size);
//
//int main(void)
//{
//    double v1[3] = {1.0,2.0,3.0}, v2[3] = {2.0, 3.0, 4.0}, v3[3]={0.0, 0.0, 0.0};
//    print_vector(v1, 3);
//    printf("\n");
//    add_vectors(v1, v2, v3, 3);
//    printf("\n");
//    printf("%f ", scalar_prod(v1, v1, v3, 3));
//    printf("\n");
//    norm2(v1, scalar_prod(v1,v1,v3,3), 3);
//
//    return 0;
//}
//
//double print_vector(double array[], int size)
//{
//    int i;
//    for(i = 0; i < size; i++)
//    {
//        printf("%f ,", array[i]);
//    }
//    return 0;
//}
//
//double add_vectors(double arr1[], double arr2[], double arr3[], int size)
//{
//    int i;
//    for(i = 0; i < size; i++)
//    {
//        arr3[i] = arr1[i] + arr2[i];
//        printf("%f ", arr3[i]);
//    }
//    return 0;
//}
//
//double scalar_prod(double arr1[], double arr2[], double arr3[], int size)
//{
//    int i;
//    double sum=0;
//    for (i = 0; i < size; i++)
//    {
//        arr3[i] = arr1[i]*arr2[i];
//        sum+= arr3[i];
//    }
//    return sum;
//
//}
//
//double norm2(double arr1[], double prod, int size)
//{
//    printf("%f", sqrt(prod));
//    return 0;
//}

//////////// Question 1 ////////////

void print_vector (double array[], int size);
void add_vectors(double vector1[], double vector2 [], double vector3[], int n);
void scalar_prod(double vector1[], double vector2 [], double vector3[], int n);

int main(void){

    double vector1[3] = {1.0,2.0,3.0};
    double vector2[3] = {2.0,3.0,4.0};
    double vector3[3] = {0.0,0.0,0.0};

    add_vectors(vector1, vector2, vector3, 3);
    scalar_prod(vector1, vector2, vector3, 3);


}

void add_vectors(double vector1[], double vector2[], double vector3[],int n){

    int i, j=0;

    for (i=0; i<n; i++){

        vector3[j] = vector1[i] + vector2[i];
        j++;
        printf("%f, ", vector3[j]);
//        printf("%d, ", vector3[i]);

    }
//    for (j=0; j<n; j++){
//        printf("%d, ", vector3[j]);
//    }
}

void scalar_prod(double vector1[], double vector2[], double vector3[], int n){

    int i, j=0, sum=0;

    for (i=0; i<n; i++){

        vector3[j] = vector1[i] * vector2[i];
//        printf("%f, ", vector3[j]);
        j++;
        sum += vector3[i];

    }

//    printf("--%d--", sum);

//    for (j=0; j<n; j++){
//        printf("%d, ", vector3[j]);
//    }


}




//////////// Question 2 ////////////

//int sort(int array[], int size);
//
//int main()
//{
//
//    int a[5] = {1,2,5,4,5};
//    sort(a,5);
//
//
//}
//
//int sort(int array[], int size)
//{
//
//    int i;
//    int e1 = array[0];
//
//    for (i=0; i<size; i++){
//
//        if (array[i+1] > e1){
//            printf ("%d", array[i]);
//            e1 = array[i];
//        }
//
//        else {
//            printf("not sorted");
//            break;
//        }
//    }
//
//    return 0;
//
//
//}


//////////// Question 3 ////////////


//int numAppears(int array[], int size, int num);
//
//int main()
//{
//    int a[5] = {1,5,3,3,3};
//    int size = 5;
//    int num;
//
//    printf("Which num would you like to check for? ");
//    scanf("%d", &num);
//    printf("Num of times number %d appears is %d times",num,numAppears(a,size,num));
//
//    return 0;
//
//}
//
//
//int numAppears(int array[], int size, int num)
//{
//
//    int i;
//    int counter=0;
//
//    for (i=0; i<size; i++){
//
//        if (array[i] == num){
//            counter ++;
//        }
//
//    }
//
//    return counter;
//
//}


//////////// Question 4 ////////////


//void change (int x[], int n);
//
//
//
//int main(void)
//{
//
//    int x[8]={0,-1,2,0,7,6,-8,0};
//    change(x,8);
//
//}
//
//void change (int x[], int n){
//
//    int i, k=0;
//    int j = n-1;
//    int temp;
//    int x2[n];
//
//    for (i=0; i<n; i++){
//
//        if (x[i] != 0){
//
//            x2[k] = x[i];
//            k++;
//
//        }
//
//        else{
//
//            x2[j]=0;
//            j--;
//
//        }
//    }
//
//    for (k=0; k<n; k++){
//        printf("%d, ", x2[k]);
//    }
//
//}

//////////// Question 5 ////////////

#define N 4

int is_diag_dom(int mat[][N]);

int main(void)
{
    int matrix[][N] = {{5,1,1,1}, {1,3,0,1}, {2,4,6,1}, {0,0,0,1}};
    is_diag_dom(matrix);

    return 0;
}

int is_diag_dom(int mat[][N])
{
    int rows, columns, sum, check = 1;
    for (rows = 0; rows < N; rows++)
    {
        sum = 0;
        for (columns = 0; columns < N; columns++)
        {
            sum+= mat[rows][columns];
        }

        sum -= mat[rows][rows];
        printf("%d\n", sum);

        if (mat[rows][rows] > sum)
        {
            check = 1;
            printf("Dominant");
        }
        else
        {
            check = 0;
            printf("Not diagonally dominant.");
            break;
        }
    }
    return 0;
}


//////////// Question 6 ////////////

//#include <math.h>
//#define N 4
//
//double diag(int matrix[][N]);
//
//int main()
//{
//	int matrix[][N] = {{1,12,13,49},{5,16,17,81}, {9,10,11,20}, {2,45,19,14}};
//	diag(matrix);
//
//	return 0;
//}
//
//double diag(int matrix[][N])
//{
//    int i, j, k = 0, a, b;
//	for (i = 0; i < ((N*2)-1); i++)
//	{
//		a = i;
//		if(i <= (N/2)+1)
//		{
//			b = 0;
//			for (j = 0; j <= k; j++)
//			{
//				printf("%d ", matrix[a][b]);
//				a--;
//				b++;
//			}
//			if(i <= (N/2))
//			{
//				k++;
//			}
//			else
//			{
//			    b = 1;
//			}
//		}
//		else
//		{
//			k--;
//			a = (N/2)+1;
//			for (j = 0; j <= k; j++)
//			{
//				printf("%d ", matrix[a][b]);
//				a--;
//				b++;
//			}
//			b = i - ((N/2)+1)+1;
//		}
//
//	}
//}


//////////// Question 7 ////////////

//#include <math.h>
//#define N 5
//
//int is_toeplitz(int matrix[][N], int m);
//
//int main()
//{
//	int matrix[][N] =  {{9,2,1,0,4},
//						{7,9,2,1,0},
//						{3,7,9,2,1},
//						{5,3,7,9,2}};
//
//    is_toeplitz(matrix, 4);
//
//    return 0;
//}
//
//int is_toeplitz(int matrix[][N], int m)
//{
//	int column, row, chk;
//	for (column = 0; column < N-1; column++)
//	{
//		for (row = 0; row < m-1; row++)
//		{
//			if (matrix[row][column] == matrix[row+1][column+1])
//			{
//				chk = 1;
//			}
//			else
//			{
//				chk = 0;
//				printf("Not a toeplitz 😞");
//				return 0;
//			}
//		}
//	}
//	printf("Yes it is toeplitz!");
//}
//
//
//
//
////////////// Question 8 ////////////

//void letter_freq(const char word[], int freq[]);
//
//int main()
//{
//	char word[] = "baqwaas";
//	int freq[26];
//
//	letter_freq(word, freq);
//	return 0;
//}
//
//void letter_freq(const char word[], int freq[])
//{
//	int letter, i;
//
//	for (i=0; i<26; i++)
//	{
//	    freq[i] = 0;
//	}
//
//	for (letter = 0; word[letter]!=0; letter++)
//	{
//	    freq[(word[letter]-'a')] += 1;
//	}
//
//	for (i=0; i<26; i++)
//	{
//	    if(freq[i] != 0)
//	    {
//	        printf("The count of %c or %c is ", (i+65), (i+97));
//	        printf("%d\n",freq[i]);
//	    }
//	}
//}


////////// Question 9 ////////////

//void string_copy(const char source[], char destination[], int n);
//
//int main()
//{
//	char cool[]= {'c','o','o','l'};
//	char copy[4];
//	string_copy(cool, copy, 4);
//	return 0;
//}
//
//void string_copy(const char source[], char destination[], int n)
//{
//	int i;
//	for(i=0; source[i]!=0; i++)
//	{
//		destination[i] = source[i];
//	}
//	destination[n] = '\0';
//	printf("%s", destination);
//}


//////////// Question 10 ////////////

//void my_strcat(const char str1[], const char str2[], char str3[], int n);
//
//int main()
//{
//	char word1[] = "kool";
//	char word2[] = "nah";
//	char combined[7];
//
//	my_strcat(word1, word2, combined, 7);
//
//	return 0;
//}
//
//void my_strcat(const char str1[], const char str2[], char str3[], int n)
//{
//	int i, j;
//
//	for (i = 0; str1[i] != 0; i++)
//	{
//		str3[i] = str1[i];
//	}
//	for (j = 0; str2[j]!=0; j++)
//	{
//	    str3[i] = str2[j];
//	    i++;
//	}
//	str3[n] = '\0';
//	printf("%s", str3);
//}
//
//
//
////////////// Question 11 ////////////
//
//int my_strcomp(const char str1[], const char str2[]);
//
//int main()
//{
//	char word1[] = "you";
//	char word2[] = "uglayyyy";
//
//	printf("%d", my_strcomp(word1, word2));
//
//	return 0;
//}
//
//int my_strcomp(const char str1[], const char str2[])
//{
//	int i, count1 = 0, count2 = 0;
//	for(i = 0; str1[i]!= 0; i++)
//	{
//		count1 += str1[i];
//	}
//	for(i = 0; str2[i]!= 0; i++)
//	{
//		count2 += str2[i];
//	}
//
//	if(count1 > count2)
//	{
//	    return 1;
//	}
//	else if (count1 < count2)
//	{
//	    return -1;
//	}
//	else
//	{
//	    return 0;
//	}
//}
//
//
////////////// Question 12 ////////////
//
//void isPrefix(const char word[], const char prefix[]);
//
//int main()
//{
//	char word1[] = "baqwas";
//	char word2[] = "baq";
//
//	isPrefix(word1, word2);
//
//	return 0;
//}
//
//void isPrefix(const char word[], const char prefix[])
//{
//	int i, check, sum1 = 0, sum2 = 0, first = 0;
//
//	for (i = 0; word[i]!= 0; i++)
//	{
//		sum1+= i;
//	}
//	for (i = 0; prefix[i]!= 0; i++)
//	{
//		sum2+= i;
//	}
//
//	if ((prefix[0] == 0)||(sum2 == sum1))
//	{
//	    printf("Ye to prefix nahi hai...");
//		check = 0;
//		first = 0;
//	}
//	else
//	{
//	    first = 1;
//	}
//
//    if (first == 1)
//    {
//        for (i = 0; prefix[i]!= 0; i++)
//    	{
//    		if(prefix[i]!=word[i])
//    		{
//    			printf("Ye to prefix nahi hai...");
//    			check = 0;
//    			break;
//    		}
//    		else
//    		{
//    			check = 1;
//    		}
//    	}
//    }
//    else
//    {
//    }
//
//	if (check == 1)
//		printf("Haan. Ye prefix hai. Shahbash.");
//}


//////////// Question 13 ////////////




//////////// Question 14 ////////////

