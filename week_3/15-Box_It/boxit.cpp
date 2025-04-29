#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
        int l,b,h; //lenght, breadth e height
    public:
        /// Construtores ///
        Box(){
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int input_l, int input_b, int input_h){
            l = input_l;
            b = input_b;
            h = input_h;
        }
        Box(Box& input_box){ //acho q vai dar problema pq eh private
            l = input_box.getLength();
            b = input_box.getBreadth();
            h = input_box.getHeight();
        }

        /// Metodos ///
        int getLength() const{
            return l;
        }
        int getBreadth() const{
            return b;
        }
        int getHeight() const{
            return h;
        }
        long long CalculateVolume() const{
            return static_cast<long long>(l) * b * h;
        }

        bool operator<(const Box& B) const{
            if(l < B.l){
                return true;
            }else if(b < B.b && l == B.l){
                return true;
            }else if(h < B.h && b == B.b && l == B.l){
                return true;
            }
            return false;
        }
        /*
          Isso aqui foi dificil, << precisa que você passe um const nela
          dai não tava conseguindo passar dentro da classe pq tem o ostream como primeiro parâmetro
          completamente confusão mental.
         */

        friend ostream& operator<<(ostream& out, const Box& A); 
};
//Apesar do erro aqui em baixo, funciona no Hacker Rank.
ostream& operator<<(ostream& out, const Box& A){
            out <<A.getLength()<<' '<<A.getBreadth()<<' '<<A.getHeight();
            return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}