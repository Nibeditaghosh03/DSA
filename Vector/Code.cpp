//#include<iostream>
//using namespace std;

//void funcInt(){
    //int *ptr = new int;
    //*ptr = 5;

    //cout << *ptr;

    //delete ptr;
//}

//void funcArr(){
    //int size;
    //cin >> size;

    //int *ptr = new int[size];

    //int x=1;
    //for(int i=0; i<size; i++){
    //ptr[i] = x;
    //cout << ptr[i] <<" ";
    //x++;
    //}
    //cout << endl;

    //delete [] ptr;
//}

//int main(){
    //funcInt();

   // return 0;
//}

//Memory Leak
//#include<iostream>
//using namespace std;

//int* func() {
    //int *ptr = new int;
    //*ptr = 1200;
    //cout << "ptr points to " << *ptr << endl;

    //return ptr;
//}

//int main(){
    //int *x = func();
    //cout << *x << endl;
    //return 0;
 //int main(){
    
//}
 //2D Dynamic array
 #include<iostream>
 using namespace std;

 int main(){
    int rows,cols;
    cout << "enter rows :" ;
    cin >> rows;
    cout << "enter cols :";
    cin >> cols;

    int**matrix = new int*[rows];

    for(int i=0; i<rows; i++){
        matrix[i]= new int[cols];
    }

    //data store
    int x = 1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i] [j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << matrix[2] [2] << endl;
    cout << *(*(matrix+2)+2) << endl;
    return 0;
 }
