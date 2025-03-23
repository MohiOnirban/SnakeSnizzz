#include<iostream>
#include<vector>// For using the vector container
#include<algorithm>// For sorting the vector


using namespace std;

int main (){
    int n ; 
    cin >> n ;

    vector<string>classmates(n);
    // Asking the user to input the number of classmates
    cout << "Enter the names of your classmates : "<< endl;

    for (int i = 0 ; i < n ; i ++){
        // Loop to take input for each classmate's name
        cin >> classmates [i];
    }
    sort(classmates.begin(),classmates.end());
    // Sorting the names in alphabetical order
    
    cout << "\nClassmates'names in alphabetical order : " << endl; 
    // Displaying the sorted names
    for ( const string &name : classmates ) {
        cout << name << endl ; 
    }
return 0;
}
// why we use vector : how to use it :\ vector< type of var > name of the var ={x,y,z}
// When you need a resizable array.When frequent insertions and deletions are required.
// When using STL functions like sort(), find(), or erase().
// why we use sorting : how to use it \sort(vectorName.begin(), vectorName.end()). 
//Vectors work efficiently with sort() because they provide direct access to elements and handle memory automatically.