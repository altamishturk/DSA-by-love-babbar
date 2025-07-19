#include<iostream>
using namespace std;


int main(){

    // solving this https://prepinsta.com/pattern-programs-tutorial/

    // // ques 1
    // cout <<"Please Enter Number" <<endl;

    // int num;

    // cin >>num;

    // for (size_t i = 1; i <= num; i++)
    // {
    //     for (size_t i = 1; i <= num; i++)
    //     {
    //         cout <<"*";
    //     }
    //     cout <<endl;
    // }
    

    // // ques 2 
     
    // cout <<"Please Enter Number" <<endl;

    // int num;

    // cin >>num;

    // for (size_t i = 1; i <= num; i++)
    // {
    //     for (size_t j = 1; j <= num; j++)
    //     {
    //         if((i == 1 || i == num) || (j == 1 || j == num)){
    //             cout <<"*";
    //         }
    //         else {
    //             cout <<" ";
    //         }
    //     }
    //     cout <<endl;
    // }


    
    // // ques 3 
     
    // cout <<"Please Enter Number" <<endl;

    // int num;

    // cin >>num;

    // for (size_t i = 1; i <= num; i++)
    // {
    //     // before spaces 
    //     for (size_t j = 1; j < i; j++)
    //     {
    //         cout <<" ";
    //     }

    //     // stars 
    //     for (size_t j = 1; j <= num; j++)
    //     {
    //         cout <<"*";
    //     }


    //     // after spaces 
    //     for (size_t j = i; j < num; j++)
    //     {
    //         cout <<" ";
    //     }
        
    //     cout <<endl;
        
    // }


    // // ques 4
     
    // int row;
    // int col;
    
    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;

    // cout <<"Please Enter Number of Cols" <<endl;
    // cin >>col;

    // for (size_t i = 1; i <= row; i++)
    // {
    //     for (size_t j = 1; j <= col; j++)
    //     {
    //         cout <<"* ";
    //     }
    //     cout <<endl;
    // }


    // // ques 5    
     
    // int row;
    // int col;
    
    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;

    // cout <<"Please Enter Number of Cols" <<endl;
    // cin >>col;

    // for (size_t i = 1; i <= row; i++)
    // {
    //     for (size_t j = 1; j <= col; j++)
    //     {
    //         if((i == 1 || i == row) || (j == 1 || j == col)){
    //             cout <<"*";
    //         }
    //         else {
    //             cout <<" ";
    //         }
    //     }
    //     cout <<endl;
    // }


    // // ques 6    
     
    // int row;
    // int col;
    
    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;

    // cout <<"Please Enter Number of Cols" <<endl;
    // cin >>col;

    // for (size_t i = 1; i <= row; i++)
    // {
    
    //         // space before stars 
    //         for (size_t j = 1; j < i; j++)
    //         {
    //             cout <<" ";
    //         }

            
            

    //         // stars
    //         for (size_t j = 1; j <= col; j++)
    //         {
    //             cout <<"*";
    //         }
            


    //         // space after stars 
    //         for (size_t j = i; j < col; j++)
    //         {
    //             cout <<" ";
    //         } 
        
    //     cout <<endl;
    // }


    // // ques 7    
     
    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;


    // for (size_t i = 1; i <= row; i++)
    // {
    
    //         // space before stars 
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         } 

        
    //         // stars
    //         for (size_t j = 1; j <= row; j++)
    //         {
    //             cout <<"*";
    //         }
            


    //         // space after stars 
    //         for (size_t j = 1; j < i; j++)
    //         {
    //             cout <<" ";
    //         }
        
    //     cout <<endl;
    // }
    
    // // ques 8    
     
    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;



    // for (size_t i = 1; i <= row; i++)
    // {
    
    //         // stars 
    //         for (size_t j = 1; j <= i; j++)
    //         {
    //             cout <<"*";
    //         } 

        
    //         // spaces
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         }
        
        
    //     cout <<endl;
    // }


    //  // ques 8    

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;


    // for (size_t i = 1; i <= row; i++)
    // {
    
    //         // spaces  
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         } 

    //         // stars 
    //         for (size_t j = 1; j <= i; j++)
    //         {
    //             cout <<"*";
    //         }

    //         // stars 
    //         for (size_t j = 1; j < i; j++)
    //         {
    //             cout <<"*";
    //         }

    //         // spaces  
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         }
        
    //     cout <<endl;
    // }


    // // ques 10    

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;

    // for (size_t i = 1; i <= row; i++)
    // {
    
    //         // spaces  
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         } 

    //         // stars 
    //         for (size_t j = 1; j <= i; j++)
    //         {
    //             if((j == 1 || i == row)){
    //                 cout <<"*";
    //             }
    //             else {
    //                 cout <<" ";
    //             }
    //         }

    //         // stars 
    //         for (size_t j = 1; j < i; j++)
    //         {
    //             if((j == (i-1) || i == row)){
    //                 cout <<"*";
    //             }
    //             else {
    //                 cout <<" ";
    //             }
    //         }

    //         // spaces  
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         }
        
    //     cout <<endl;
    // }


    // // ques 11    

    // int row;
  
    
    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;


    // for (size_t i = 1; i <= row; i++)
    // {
    
    //         // spaces  
    //         for (size_t j = 1; j < i; j++)
    //         {
    //             cout <<" ";
    //         } 

    //         // stars 
    //         for (size_t j = i; j <= row; j++)
    //         {
    //             cout <<"*";
    //         }

    //         // stars 
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<"*";
    //         }

    //         // spaces  
    //         for (size_t j = 1; j < i; j++)
    //         {
    //             cout <<" ";
    //         }
        
    //     cout <<endl;
    // }



    // // ques 12    

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;


    // for (size_t i = 1; i <= row; i++)
    // {
    
    //         // spaces  
    //         for (size_t j = 1; j < i; j++)
    //         {
    //             cout <<" ";
    //         } 

    //         // stars 
    //         for (size_t j = i; j <= row; j++)
    //         {
    //             if(j == i || i == 1){
    //                 cout <<"*";
    //             }
    //             else {
    //                 cout <<" ";
    //             }
    //         }

    //         // stars 
    //         for (size_t j = i; j < row; j++)
    //         {
    //             if(j == (row-1) || i == 1){
    //                 cout <<"*";
    //             }
    //             else {
    //                 cout <<" ";
    //             }
    //         }

    //         // spaces  
    //         for (size_t j = 1; j < i; j++)
    //         {
    //             cout <<" ";
    //         }
        
    //     cout <<endl;
    // }



    // // ques 13   

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;


    // // top trangle 
    // for (size_t i = 1; i <= row; i++)
    // {
    
    //         // stars  
    //         for (size_t j = 1; j <= i; j++)
    //         {
    //             cout <<"*";
    //         }

    //         // spaces  
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         }  

    //         cout <<endl;
    // }


    // // bottom trangle 
    // for (size_t i = 1; i < row; i++)
    // {
    //         // stars  
    //         for (size_t j = i; j <= (row-1); j++)
    //         {
    //             cout <<"*";
    //         }

    //         // spaces  
    //         for (size_t j = (row-i); j < (row-1); j++)
    //         {
    //             cout <<" ";
    //         } 
    //         cout <<endl; 
    // }



    // // ques 14   

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;


    // // top trangle 
    // for (size_t i = 1; i <= row; i++)
    // {
    //         // spaces  
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         } 

    //         // stars  
    //         for (size_t j = 1; j <= i; j++)
    //         {
    //             cout <<"*";
    //         }
    //         cout <<endl;
    // }


    // // bottom trangle 
    // for (size_t i = 1; i < row; i++)
    // {
    //         // spaces  
    //         for (size_t j = (row-i); j < (row); j++)
    //         {
    //             cout <<" ";
    //         } 

    //         // stars  
    //         for (size_t j = i; j <= (row-1); j++)
    //         {
    //             cout <<"*";
    //         }

    //         cout <<endl; 
    // }
    
    

    // // ques 15   

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;


    // // top trangle 
    // for (size_t i = 1; i <= row; i++)
    // {
    //         // spaces  
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         } 

    //         // stars  
    //         for (size_t j = 1; j <= i; j++)
    //         {
    //             cout <<"*";
    //         }

            
    //         // stars  
    //         for (size_t j = 1; j < i; j++)
    //         {
    //             cout <<"*";
    //         }

    //         // stars  
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<" ";
    //         }
    //         cout <<endl;
    // }

    // // bottom trangle 
    // for (size_t i = 1; i < row; i++)
    // {
    //         // spaces  
    //         for (size_t j = 1; j <= i; j++)
    //         {
    //             cout <<" ";
    //         } 

    //         // stars  
    //         for (size_t j = i; j < row; j++)
    //         {
    //             cout <<"*";
    //         }

            
    //         // stars  
    //         for (size_t j = i; j < (row-1); j++)
    //         {
    //             cout <<"*";
    //         }

    //         // stars  
    //         for (size_t j = 1; j <= i; j++)
    //         {
    //             cout <<" ";
    //         }
    //         cout <<endl;
    // }


    
    // // ques 16   

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;
    
    // for (size_t i = 1; i <= row; i++)
    // {
    //     for (size_t j = 1; j <= row; j++)
    //     {
    //         cout <<"1";
    //     }
    //      cout <<endl;        
    // }


    // // ques 17   

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;
    
    // for (size_t i = 1; i <= row; i++)
    // {
    //     for (size_t j = 1; j <= row; j++)
    //     {
    //         cout <<i;
    //     }
    //      cout <<endl;        
    // }


    // // ques 18 

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;
    
    // for (size_t i = 1; i <= row+1; i++)
    // {
    //     for (size_t j = 1; j <= row; j++)
    //     {
    //         if(i == 1 || i == (row+1) || j == 1 || j == row){
    //             cout <<row;
    //         }
    //         else {
    //             cout <<i-1;
    //         }
    //     }
    //      cout <<endl;        
    // }



    // // ques  19

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;
    
    // int num = 1;

    // for (size_t i = 1; i <= row; i++)
    // {
    //     for (size_t j = 1; j <= i; j++)
    //     {
    //         cout <<num;
    //         num = num+1;
    //     }
    //     cout <<endl;        
    // }


    // // ques 20

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;
    
    // int num = 10;

    // for (size_t i = 1; i <= row; i++)
    // {
    //     for (size_t j = i; j <= row; j++)
    //     {
    //         cout <<num;
    //         num = num-1;
    //     }
    //     cout <<endl;        
    // }
 
    
    // //ques 21

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;
    
    // int num = 6;

    // for (size_t i = 1; i <= row; i++)
    // {
    //     for (size_t j = i; j <= row; j++)
    //     {
    //         cout <<num;
    //     }
    //     num = num-1;
    //     cout <<endl;        
    // }


    // //ques 22

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;
    
    // int num = 3;

    // for (size_t i = 1; i <= row; i++)
    // {
    //     for (size_t j = 1; j <= i; j++)
    //     {
    //         cout <<num;
    //     }
    //     num = num+1;
    //     cout <<endl;        
    // }


    // //ques 23

    // int row;

    // cout <<"Please Enter Number of Rows" <<endl;
    // cin >>row;
    
    // int num = 3;

    // for (size_t i = 1; i <= row; i++)
    // {
    //     for (size_t j = 1; j <= i; j++)
    //     {
    //         cout <<num;
    //         cout <<" ";
    //         num = num+1;
    //     }
    //     cout <<endl;        
    // }

}