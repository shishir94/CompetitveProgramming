
        for(int i=0;i<=n-a-1;i++){
            mt.erase(mt.find(pre[i+a-1]));
            ans = max(ans,*mt.rbegin()-pre[i]);
        }