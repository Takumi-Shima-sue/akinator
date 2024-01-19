#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<utility>
#include<set>
#include<unordered_set>
#include<queue>
#include<stack>
#include<numeric>
#include<iomanip>
#include<cmath>
#include<random>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i, n) for(int i = 0; i < (n); ++i)

// class Stock{
//     public:
//         Stock(int ans){
//             answer = ans;
//             deck.push_back(ans);
//             for(int i = 0; i < 99; i++){
//                 deck.push_back(dist(rng));  // 乱数生成
//             }
//         }
//         // クラスを分ける
//         int GetAnswer(){
//             return answer;
//         }

//     private:
//         int answer;
//         vector<int> deck;
//         mt19937 rng;  // 擬似乱数生成器の初期化
//         uniform_int_distribution<int> dist(1, 50);  // 1から50の整数の一様分布
// };

class Player{
    public:
        Player(string input_name){
            name = input_name;
        }
        void DrawCard(int card){
            hand.push_back(card);
            sort(hand.begin(), hand.end());
        }
        void DiscardCard(int card){
            hand.erase(remove(hand.begin(), hand.end(), card), hand.end());
        }
        void PutDownCard(){
            for(int i = 0; i < hand.size(); i++){
                cout << hand[i] << " ";
            }
            cout << endl;
        }
        void AskQuestion(){

        }
        void GetName(){
            cout << name << endl;
        }

    private:
        string name;
        vector<int> hand;
};

int main(){
    Player pr1("Dirac");
    Player pr2("Watson");
    Player pr3("Einstein");
    Player pr4("Pauli");
    vector<Player> vec_pr;
    vec_pr.push_back(pr1);
    vec_pr.push_back(pr2);
    vec_pr.push_back(pr3);
    vec_pr.push_back(pr4);
    for(int i = 0; i < vec_pr.size(); i++){
        vec_pr[i].GetName();
    }





    return 0;
}