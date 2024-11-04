#include<stdio.h>
#include<string.h>

  /*struct Student{
  int id;
  float cgpa;
  char name[20];


  };

  int main(){
   struct Student s;
   printf("Enter your id: \n");
   scanf("%d", &s.id);
   printf("Enter your cgpa: \n");
   scanf("%f", &s.cgpa);
   printf("Enter your Name: \n");
   scanf("%s", &s.name);

   printf("Name: %s; id: %d; cgpa: %f\n", s.name, s.id,s.cgpa);
*/

/*struct Product{
     int id;
     char name[50];
     char category[20];
     float price;
     int quantity;
   } ;
*/

//Pointer to structure variable

 struct Point {
  int x;
  int y;

 };
int main(){

    struct Point point1 = {1,2};
    struct Point *ptr = &point1;

    printf("x = %d, y = %d\n", ptr->x,ptr->y);
    ///to write below way also both okay
    printf("x = %d, y = %d\n", (*ptr).x,(*ptr).y);



  /*
   ///Array of structure
    struct Product products[3] = {
     { 101,"Laptop XYZ", "Electronics",1200.00, 15},
     {102, "Cooking XYZ", "Cookarize",2000.00, 12},
      {103, "cosmatics XYZ", "facewash",2000.00, 3},
    };

    for( int i = 0; i < 3; i++)
    {
        printf("Product ID: %d\n", products[i].id);
        printf("Product Name: %s\n", products[i].name);
        printf("Product Category: %s\n", products[i].category);
        printf("Price: %.2f\n", products[i].price);
        printf("Quantity: %d\n\n", products[i].quantity);

    }

*/


  //declaring variable product_1
  //Initilization through{}
  /*
   struct Product product_1 = {101,"Laptop", "cloud",1200.00,15};
   //asign id
   product_1.id = 101;
   strcpy(product_1.name, "emu Mariom");
   strcpy(product_1.category, "cloud");
   product_1.price = 1200.00;
   product_1.quantity = 15;

  printf("id: %d\n", product_1.id);
  printf("name: %s\n", product_1.name);
  printf("category: %s\n", product_1.category);
  printf("price: %.2f\n", product_1.price);
  printf("quantity: %d", product_1.quantity);

*/

}

