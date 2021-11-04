#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,m=2,n=2,l=2,choice;
    do{ 
        cout<<"------------------------------------------\n";
        cout<< "1)Vector 2)Maps 3)Unordered Maps 4)Set\n";                          
        cout<< "5)Unordered Set 6)Stack 7)Queue 8)Sort\n";
        cout<< "9)Priority Queue 10)Double Queue 11)Exit\n";
        cout<<"\nEnter the option :: ";
        cin >> choice;

        //vectors
        vector<int> v1(n, 1);                         //1D vector initalised with all to be 1
        vector<vector<int>> v2(n, vector<int>(m, 2)); //2D vector initalised with all to be 2
        vector<vector<vector<int>>> v3(n, vector<vector<int>>(m, vector<int>(l, 3)));

         // Maps
        map<int, int> maps;
        map<int, int>::iterator itr;

        // Unordered Map
        unordered_map<int, int> umaps;

        //Set
        set<int, greater<int>> s1 = {4, 12, 8, 2};
        set<int>::iterator it;
        set<int> s2 = {4, 12, 8, 2};

        // Unordered Set
        int arr[] = {2, 6, 7, 8, 23, 45, 23, 6, 17, 9};
        int nu = sizeof(arr) / sizeof(int);
        unordered_set<int> intSet;
        unordered_set<int> duplicate;
        
        // stack
        stack<int> s;
        
        //queue
        queue<int> g;
        
        // Sort
        int as[] = {1, 23, 45, 2, 12, 19, 17, 63};
        int ns = 8;
        
        //priority queue
        priority_queue<int> pq;
        
        //double queue
        deque<int> dq;
           
        switch(choice){
            case 1:
                   cout<<"1D vector ::";
                   for(int i=0; i < n;i++){
                       cout<<v1[i]*4<<" ";
                   }
                   cout<<"\n2D vector ::";
                   for(int i=0; i < n;i++){
                       for(int j=0; j < m;j++){
                           cout<<v2[i][j]*3<<" ";
                       }
                   }
                   cout<<"\n3D vector ::";
                   for(int i=0; i < n;i++){
                       for(int j=0; j < m;j++){
                           for(int k=0; k <l;k++){
                               cout<<v3[i][j][k]*2<<" ";
                           }
                           cout<<endl;
                       }
                       cout<<endl;
                   }
                   break;
            case 2:
                cout << "Enter the number of entries for map : ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    cin >> a >> b;
                    maps.insert(pair<int, int>(a, b));
                }
                cout << "\nMap :: \n";
                
                for (itr = maps.begin(); itr != maps.end(); ++itr)
                {
                    cout << itr->first << '\t' << itr->second << '\n';
                }
                cout << endl;
                cout << "\nEnter the number on which to perform the erase() operation : " << endl;
                cin >> c;
                maps.erase(c);
                for (itr = maps.begin(); itr != maps.end(); ++itr)
                {
                    cout << itr->first << '\t' << itr->second << '\n';
                }
                cout << endl;
                break;
            case 3:
                cout << "\nEnter the number of entries : ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    cin >> a >> b;
                    umaps[a] = b;
                }
                cout << "\nUnordered Map :: \n";
                for (auto i = umaps.begin(); i != umaps.end(); i++)
                {
                    cout << i->first << "\t" << i->second << '\n';
                }
                cout << endl;
                cout << endl;
                break;
            case 4:
                cout << "\nSet with greater<int> : ";
                for (it = s1.begin(); it != s1.end(); it++)
                    cout << *it << " ";
                cout << endl;
                cout << "\nSet without greater<int> : ";
                for (it = s2.begin(); it != s2.end(); it++)
                    cout << *it << " ";
                cout << endl;
                cout<<endl;
                break;
            case 5:
                cout<<endl;
                cout<<"Original Array"<<endl;
                for (int i = 0; i < nu; i++)
                {
                    if (intSet.find(arr[i]) == intSet.end()){
                        intSet.insert(arr[i]);
                        cout<<" "<<arr[i];
                    }    
                    else{
                        duplicate.insert(arr[i]);
                        cout<<" "<<arr[i];
                    }    
                }
                cout<<endl;
                cout << "\nDuplicate item are filtered using sets : ";
                for (auto itr = duplicate.begin(); itr != duplicate.end(); itr++)
                {
                    cout << *itr << " ";
                }
                cout<<endl;
                   break;
            case 6:
                cout<<"\nSatck ::";
                s.push(21);
                s.push(22);
                s.push(24);
                s.push(25);
                while (!s.empty())
                {
                    cout << " " << s.top();
                    s.pop();
                }
                cout<<endl;
                cout<<endl;
                   break;
            case 7:
                cout<<"\nQueue ::";
                cout<<endl;
                g.push(10);
                g.push(20);
                g.push(30);
                cout<<endl;
                cout << "Size of Queue : " << g.size();
                cout<<endl;
                while (!g.empty())
                {
                    cout << " " << g.front();
                    g.pop();
                }
                cout<<endl;
                   break;
            case 8:
                cout<<"\nBefore Sorting ::";
                for (int i = 0; i < ns; ++i)
                    cout << as[i] << " ";
                sort(as, as + ns);
                cout<<"\nAfter Sorting ::";
                for (int i = 0; i < ns; ++i)
                    cout << as[i] << " ";
                cout<<endl;    
                break;
            case 9:
                pq.push(10);
                pq.push(30);
                pq.push(20);
                pq.push(5);
                pq.push(1);
                cout << "\nThe priority queue is : ";
                while (!pq.empty())
                {
                    cout << " " << pq.top();
                    pq.pop();
                }
                cout << '\n';
                break;                                   
            case 10:
            cout << "\nThe Double queue is : ";
                dq.push_back(10);
                dq.push_front(20);
                dq.push_back(30);
                dq.push_front(15);
                for (auto it = dq.begin(); it != dq.end(); ++it)
                    cout << " " << *it;
                cout << '\n';
                cout<<" After front Pop : ";
                dq.pop_front();
                for (auto it = dq.begin(); it != dq.end(); ++it)
                    cout <<" "<< *it;
                cout << '\n';
                cout<<" After back Pop : ";
                dq.pop_back();
                for (auto it = dq.begin(); it != dq.end(); ++it)
                    cout << '\t' << *it;
                cout << '\n';
                break;
            case 11:
                   exit(0);
                   break;    
            default: cout<<"\nWrong Choice, retry\n";                                      
        }
    } while (choice != 11);
    return 0;
}