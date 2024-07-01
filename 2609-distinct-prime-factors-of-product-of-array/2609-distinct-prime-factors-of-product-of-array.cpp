class Solution {
public:

// get the prime factors of each number and store it in a set

unordered_set<int>primefactors(int num)
{
 unordered_set<int>factors;
 // division by 2
 while(num%2==0)
 {
    factors.insert(2);
    num=num/2;
 }
 // division by odd numbers
 for(int i=3;i*i<=num;i=i+2)
 {
    while(num%i==0)
    {
        factors.insert(i);
        num=num/i;
    }
 }
// if num is still >2 means it is now a prime factor
if(num>2)
{
    factors.insert(num);
}
return factors;


}
    int distinctPrimeFactors(vector<int>& nums) {
        // we do not need to get the product of all the elements of the array as product will be too large to store
        // prime factor of each element will also be the prime factor of product

        // we have to count the number of distinct prime factors of the product ( use set data structure to store the prime factors of each element  and then return the size of set) 
        // if num2%num1 ==0 then num1 is a factor of num2
        // prime means it is divisible by 1 and itself only
        // example 2 is a prime number , 3 is a prime number , 5 is a prime number , 7 is a prime number etc


unordered_set<int>uniqueprimes;
for(int num:nums)
{
    unordered_set<int>factors=primefactors(num);
    uniqueprimes.insert(factors.begin(), factors.end());
}
        return uniqueprimes.size();

        
    }
};