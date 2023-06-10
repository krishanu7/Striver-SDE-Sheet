int modularExponentiation(int x, int n, int m) {
    int ans = 1;
	while(n){
		if(n&1) ans = (ans*1ll*x)%m;
		x = (x*1ll*x)%m;
		n >>= 1;
	}
	return ans;
}
//T.C -> O(log(n))
//S.C -> O(1)
