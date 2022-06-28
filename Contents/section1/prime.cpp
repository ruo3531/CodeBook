#define M 2000000
bool prime[M+10];
void Find(){
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2; i <= M; i++){
        if(prime[i]){
            for(int j = i+i; j <= M; j+=i){
                prime[j] = false;
            }
        }
    }
}