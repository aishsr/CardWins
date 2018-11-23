//includes
extern "C" {
#include <stdlib.h>
#include <time.h>
}
#include <iostream>
using namespace std;

//functions
void swap(int& a, int& b){
int tmp;
tmp = b;
a = b;
b = tmp;
}

int remainingCards(int size, int i){
int Cards_Left = size - 1 - i;
return Cards_Left;
}

int RNG_value(int max, int min){
int rng_value = min + rand() / (RAND_MAX / (max - min + 1) + 1);
return rng_value;
}

void shuffle(int array[], int size){
int j;
int tmp;
for(int i = 0; i < 52; i++){
	j = (rand() + time(0)) % size;
	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}
}
int deal(int array[], int size){
int array_max = size-1;
//size--;
int k = array[array_max];
return k;
}



//MAIN
int main(const int argc, const char* const argv[]){
srand((unsigned int)time(NULL));
int deck[52] = { 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 
10 , 10 , 10 , 10 , 10 , 10 , 10};
int value_in_hand = 0;
int threshold;

shuffle( deck , 52 );

int j = 52;

int blackjackcount = 0;
int bust = 0;
//threshold = 10;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 10){
		if(j == 0){
			shuffle( deck , 52);
			value_in_hand = 0;
			j = 52;
		}
		if(value_in_hand < 10){
			value_in_hand = value_in_hand + deal( deck , j);
			j--;
		}
	}
//	if(value_in_hand == 10){
//		blackjackcount++;
//	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
float Bust_before_threshold = (float)bust / 10000;

	
cout<<"Threshold: 10 "<<" # of times busted before reaching threshold / # of games : " 
<<Bust_before_threshold<<endl;
j = 52;
value_in_hand = 0;
bust = 0;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 11){
		if(j==0){
			shuffle( deck, 52);
			value_in_hand = 0;
			j = 52;
		}
		if((value_in_hand == 0) && (deal( deck , j) == 1)){
			value_in_hand = 11;
			j--;
		}
		if(value_in_hand < 11){
			value_in_hand = value_in_hand + deal(deck , j);
			j--;
		}
	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
Bust_before_threshold = (float)bust / 10000;
cout<<"Threshold: 11 "<<" # of times busted before reaching threshold / # of games : " 
<<Bust_before_threshold<<endl;
bust = 0;
value_in_hand = 0;
j = 52;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 12){
		if(j==0){
			shuffle( deck, 52);
			value_in_hand = 0;
			j = 52;
		}
		if((value_in_hand == 1) && (deal(deck, j) == 1)){
			value_in_hand = 12;
			j--;
		}
		if(value_in_hand < 12){
			value_in_hand = value_in_hand + deal(deck, j);
			j--;
		}
	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
Bust_before_threshold = (float)bust / 10000;
cout<<"Threshold: 12 "<<" # of times busted before reaching threshold / # of games : " 
<<Bust_before_threshold<<endl;
bust = 0;
value_in_hand = 0;
j = 52;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 13){
		if(j==0){
			shuffle( deck, 52);
			value_in_hand = 0;
			j = 52;
		}
		if((value_in_hand == 2) && (deal(deck,j) == 1)){
			value_in_hand = 13;
			j--;
		}
		if(value_in_hand < 13){
			value_in_hand = value_in_hand + deal(deck, j);
			j--;
		}
	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
Bust_before_threshold = (float)bust / 10000;
cout<<"Threshold: 13 "<<" # of times busted before reaching threshold / # of games : " 
<<Bust_before_threshold<<endl;
bust = 0;
value_in_hand = 0;
j = 52;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 14){
		if(j==0){
			shuffle( deck, 52);
			value_in_hand = 0;
			j = 52;
		}
		if((value_in_hand == 3) && (deal(deck,j) == 1)){
			value_in_hand = 14;
			j--;
		}
		if(value_in_hand < 14){
			value_in_hand = value_in_hand + deal(deck, j);
			j--;
		}
	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
Bust_before_threshold = (float)bust / 10000;
cout<<"Threshold: 14 "<<" # of times busted before reaching threshold / # of games : "
<<Bust_before_threshold<<endl;
bust = 0;
value_in_hand = 0;
j = 52;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 15){
		if(j==0){
			shuffle(deck, 52);
			value_in_hand = 0;
			j = 52;
		}
		if((value_in_hand == 4) && (deal(deck,j) == 1)){
			value_in_hand = 15;
			j--;
		}
		if(value_in_hand < 15){
			value_in_hand = value_in_hand + deal(deck, j);
			j--;
		}
	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
Bust_before_threshold = (float)bust / 10000;
cout<<"Threshold: 15 "<<" # of times busted before reaching threshold / # of games : "
<<Bust_before_threshold<<endl;
bust = 0;
value_in_hand = 0;
j = 52;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 16){
		if(j==0){
			shuffle(deck, 52);
			value_in_hand = 0;
			j = 52;
		}
		if((value_in_hand == 5) && (deal(deck,j) == 1)){
			value_in_hand = 16;
			j--;
		}
		if(value_in_hand < 16){
			value_in_hand = value_in_hand + deal(deck,j);
			j--;
		}
	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
Bust_before_threshold = (float)bust / 10000;
cout<<"Threshold: 16 "<<" # of times busted before reaching threshold / # of games: "
<<Bust_before_threshold<<endl;
bust = 0;
value_in_hand = 0;
j = 52;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 17){
		if(j==0){
			shuffle(deck, 52);
			value_in_hand = 0;
			j = 52;
		}
		if((value_in_hand == 6) && (deal(deck,j) == 1)){
			value_in_hand = 17;
			j--;
		}
		if(value_in_hand < 17){
			value_in_hand = value_in_hand + deal(deck,j);
			j--;
		}
	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
Bust_before_threshold = (float)bust / 10000;
cout<<"Threshold: 17 "<<" # of times busted before reaching threshold / # of games: "
<<Bust_before_threshold<<endl;
bust = 0;
value_in_hand = 0;
j = 52;

	
	
	
	
bust = 0;
value_in_hand = 0;
j = 52;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 19){
		if(j==0){
			shuffle(deck,52);
			value_in_hand = 0;
			j = 52;
		}
		if((value_in_hand == 8) && (deal(deck,j) == 1)){
			value_in_hand = 19;
			j--;
		}
		if(value_in_hand < 19){
			value_in_hand = value_in_hand + deal(deck, j);
			j--;
		}
	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
Bust_before_threshold = (float)bust / 10000;
cout<<"Threshold: 19 "<<" # of times busted before reaching threshold / # of games : "
<<Bust_before_threshold<<endl;
bust = 0;
value_in_hand = 0;
j = 52;
for(int i = 0; i < 10000; i++){
	while(value_in_hand < 20){
		if(j==0){
			shuffle(deck, 52);
			value_in_hand = 0;
			j = 52;
		}
		if((value_in_hand == 9) && (deal(deck,j) == 1)){
			value_in_hand = 20;
			j--;
		}
		if(value_in_hand < 20){
			value_in_hand = value_in_hand + deal(deck, j);
			j--;
		}
	}
	if(value_in_hand > 21){
		bust++;
	}
	value_in_hand = 0;
}
Bust_before_threshold = (float)bust / 10000;
cout<<"Threshold: 20 "<<" # of times busted before reaching threshold / # of games : "
<<Bust_before_threshold<<endl;
bust = 0;
j = 52;
bool bet_high;
bool bet_low;
//Question5
int player_value_in_hand = 0;
int dealer_value_in_hand = 0;
int runningCount = 0;
int player_bet_right = 0;
for(int i = 0; i < 10000; i++){
	j = 52;
	shuffle(deck, 52);
	dealer_value_in_hand = deal(deck, j);
	if((dealer_value_in_hand == 1) || (dealer_value_in_hand == 10)){
		runningCount--;
	}
	if((dealer_value_in_hand > 1) && (dealer_value_in_hand < 7)){
		runningCount++;
	}
	j--;
	for(int k = 0; k < 6; k++){
		deal(deck, j);
		if((deal(deck,j) == 1) || (deal(deck,j) == 10)){
			runningCount--;
		}
		if((deal(deck,j) > 1) && (deal(deck,j) < 7)){
			runningCount++;
		}
		j--;
	}
	while(player_value_in_hand < 21){
		if(j==0){
			player_value_in_hand = 0;
			shuffle(deck, 45);
			j = 45;
			runningCount = 0;
		}
		if(runningCount > 0){
			bet_high = true;
			bet_low = false;
		}
		if(runningCount < 0){
			bet_low = true;
			bet_high = false;
		}
		if(runningCount == 0){
			bet_low == false;
			bet_high == false;
		}
		if((player_value_in_hand == 10) && (deal(deck , j) == 1) && (j > 0)){ 
			player_value_in_hand = 21;
			runningCount--;
			j--;
		}
		if((player_value_in_hand >= 19) && (player_value_in_hand < 21) && (j > 0)){
			if(bet_low == true){
				player_value_in_hand = player_value_in_hand + deal(deck, j);
				if((deal(deck,j) > 1) && (deal(deck,j) < 7)){
					runningCount++;
				}
				if(runningCount > 0){
					bet_high = true;
					bet_low = false;
				}
				else if(runningCount == 0){
					bet_high = false;
					bet_low = false;
				}
				if((deal(deck,j) == 1) || (deal(deck,j) == 10)){
					runningCount--;
				}
				j--;
			}
			cout<<player_value_in_hand<<endl;
			if(bet_high == true){
				break;
			}
		}
		else if((player_value_in_hand < 19) && (j > 0)){
			player_value_in_hand = player_value_in_hand + deal(deck,j);
			if((deal(deck,j) > 1) && (deal(deck,j) < 7)){
				runningCount++;
			}
			if((deal(deck,j) == 1) || (deal(deck,j) == 10)){
				runningCount--;
			}
			j--;
		}
	}	
	while((dealer_value_in_hand < 17) || (dealer_value_in_hand < player_value_in_hand)){
		if(j==0){
			shuffle(deck, 46);
			dealer_value_in_hand = 0;
			j = 46;
		}
		if((dealer_value_in_hand == 10) && (deal(deck, j) == 1) && (j > 0)){
			dealer_value_in_hand = 21;
			j--;
		}
		if((dealer_value_in_hand < 17) && (j > 0)){
			dealer_value_in_hand = dealer_value_in_hand + deal(deck, j);
			j--;
		}
		if(dealer_value_in_hand > 17){
			break;
		}
	}
	if((bet_high == true) && (player_value_in_hand > dealer_value_in_hand) && (player_value_in_hand <= 21)){
		player_bet_right++;
	}
	if((bet_low == true) && (player_value_in_hand < dealer_value_in_hand) || (player_value_in_hand > 21)){
		player_bet_right++;
	}
	else if(dealer_value_in_hand > 21){
		player_bet_right++;
	}
	player_value_in_hand = 0;
	dealer_value_in_hand = 0;
}
cout<<player_bet_right<<endl;		
return 0;
}
