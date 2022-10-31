#include <stdio.h>

//Φτιάχνω μία συνάρτηση η οποία επιστρέφει την τιμή του πίνακα στη θέση i

float retrieve(float * array ,int i )

{

    return array[i];

}

//Φτιάχνω μία συνάρτηση η οποία αναθέτει στη θέση i του πίνακα την τιμή n

float update(float * array,int i, float n)

{

     array[i]=n;

    return 0;

}

 

int main()

{

    int i;

    float arr1[10],arr2[10],c;

    float arr3[10];

//Ζητάω από το χρήστη να εισάγει τιμές στους πίνακες

    for (i=0;i<2;i++)

    {

        printf("give a number for element %d \n", i);

        scanf("%f", &arr1[i]);

 

 

        printf("give a number for element %d \n", i);

        scanf("%f", &arr2[i]);

    }

//Καλώ τις συναρτήσεις που έφτιαξα ώστε να προσθέσω τους πίνακες φτιάχνοντας έναν 3ο πίνακα

    for (i=0;i<2;i++)

    {

        c=retrieve(arr1,i) + retrieve(arr2,i);

        update(arr3,i,c);

 

        printf("element %d : %.2f \n", i, arr3[i]);

    }

    return 0;

}