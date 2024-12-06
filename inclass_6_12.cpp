#include<iostream>
#include<string> 
using namespace std;

struct node{
	string data;
	node* left;
	node* right; 
}; 
node* createnode(string a){
	node* t = new node; 
	t->data = a;
	t->left = NULL;
	t->right = NULL; 
} 
void printtrungto(node* t){
	if(t != NULL){
		printtrungto(t->left);
		cout << t->data <<" ";
		printtrungto(t->right); 
	} 
} 
void printtiento(node* t){
	if(t!= NULL){
		cout << t->data <<" ";
		printtiento(t->left);
		printtiento(t->right); 
	} 
} 
void printhauto(node* t){
	if(t != NULL){
		printhauto(t->left);
		printhauto(t->right);
		cout << t->data<<" "; 
	} 
} 
int main(){
	node *t = createnode("+");
	t->left = createnode("-");
	t->left->left= createnode("+");
	t->left->right= createnode("^");
	t->left->left->left=createnode("a");
	t->left->left->right=createnode("/");
	t->left->right->left=createnode("c");
	t->left->right->right= createnode("8");
	t->left->left->right->left=createnode("*"); 
	t->left->left->right->right=createnode("c"); 
	t->left->left->right->left->left=createnode("5"); 
	t->left->left->right->left->right=createnode("b"); 
	t->right=createnode("*");
	t->right->left=createnode("d");
	t->right->right=createnode("^"); 
	t->right->right->left=createnode("e");
	t->right->right->right=createnode("0,5"); 
	
	cout << "Bieu thuc trung to: ";
	printtrungto(t);
	cout << endl;
	
	cout << "Bieu thuc hau to: ";
	printhauto(t);
	cout << endl;
	
	cout << "Bieu thuc tien to: ";
	printtiento(t);
	cout << endl;
	 
	 return 0; 
} 














