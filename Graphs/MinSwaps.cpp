int minSwaps(int arr[], int N){
    bool* visited = new bool[N];
    for(int i = 0;i<N;i++){
        visited[i] = false;
    }
    vector<pair<int,int>> final;
    for(int i = 0;i<N;i++)
        final.push_back({arr[i],i});
    sort(final.begin(), final.end());
    int ans = 0;
    for(int i = 0;i<N;i++){
        if(final[i].first == arr[i])
            visited[i] = true;
        else{
            int j = i, cycle = 1;
            while(visited[j]!=true){
                visited[j] = true;
                j = final[j].second;
                if(!visited[j])
                cycle++;
            }
            ans += cycle - 1;
        }
    }
    return ans;
}
