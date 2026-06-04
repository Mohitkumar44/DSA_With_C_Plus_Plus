class Solution {
public:
    long long inversion(const vector<int>& a, const vector<int>& b){
        int i = 0, j = 0;
        long long count = 0;
        while(i < a.size() && j < b.size()){
            if(a[i] <= b[j]){
                i++;
            }
            else{
                count += a.size()-i;
                j++;
            }
        }
        return count;
    }
    void merge(vector<int>& a, vector<int>& b, vector<int>& res){
        int n1 = a.size(), n2 = b.size();
        int i = 0, j = 0, k = 0;
        while(i < n1 && j < n2){
            if(a[i]<b[j]) res[k++] = a[i++];
            else res[k++] = b[j++];
        }
        while(i<n1) res[k++] = a[i++];
        while(j<n2) res[k++] = b[j++];        
    }
    long long countInversion(vector<int>& v){
        long long count = 0;
        int n = v.size();
        if(v.size()<=1) return 0;
        int n1 = n/2, n2 = (n+1)/2;
        vector<int> a(n1), b(n2);

        for(int i  = 0; i < n1; i++){
            a[i] = v[i];
        }

        for(int i  = 0; i < n2; i++){
            b[i] = v[n1+i];
        }

        count += countInversion(a);
        count += countInversion(b);
        count += inversion(a,b);

        merge(a,b,v);

        a.clear();
        b.clear();
        return count;
    }
    long long int numberOfInversions(vector<int> nums) {
        int n = nums.size();
        return countInversion(nums);
    }
};