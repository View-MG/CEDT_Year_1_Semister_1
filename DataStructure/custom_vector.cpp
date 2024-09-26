#include <bits/stdc++.h>
namespace View  {
    template <typename T>
    class vector{
        protected:
            T *mData;
            size_t mCap;
            size_t mSize;

            void rangeCheck(int n){
            if(n < 0 || (size_t)n >= mSize){
                throw std::out_of_range("Index of out range");
            }
            }
            
            //Move Old Data to New Data
            void expand(size_t capacity){
                T *arr = new T[capacity]();
                for(size_t i ; i < mSize ; i++){
                    arr[i] = mData[i]; //Copy to new array
                }
                delete [] mData; //Delete Old Data
                mData = arr; //Move to new address's array
            }

            //Check mCap when push_back if not enought , make new size and expand
            void ensureCapacity(size_t capacity){
                if(capacity > mCap){
                    size_t s;
                    if(capacity > 2*mCap) s=capacity;
                    else s=2*mCap;
                    expand(s);
                }
            }

        public:
        // ------------ access data ---------------
            T& at(int index){
            rangeCheck(index);
            return mData[index];
            }
            T& operator[](int index){
            return mData[index];
            }
        // ------------ function ---------------
            bool empty() const{
                return mSize==0;
            }
            size_t size() const{
                return mSize;
            }
            size_t capacity() const{
                return mCap;
            }
        // ------------ constructor -------------------
        // default
            vector(){ 
                int cap=1;
                mData = new T[cap]();
                mCap = cap;
                mSize = 0;
            }
        // with initial size
            vector(size_t cap){
                mData = new T[cap]();
                mCap = cap;
                mSize = cap;
            }
        // ----------- copy constructor ---------- *pass by value method*
            T& operator=(const vector<T> other){
                using std::swap;
                swap(this->mSize , other.mSize);
                swap(this->mCap , other.mCap);
                swap(this->mData , other.mData);
                return *this;
            }
        // ----------- modify ----------------------
            void push_back(const T& element){
            ensureCapacity(mSize+1);
            mData[mSize++] = element;
            }
            void pop_back(){
            mSize--;
            }
        // ----------- iterator ----------------
            T* begin(){
                return &mData[0];
            }
            T* end(){
                return begin()+mSize;
            }
};
}
int main(){
    View::vector<int> w(5);
    std::cout << "Before" << std::endl;
    for(int i=0 ; i<10 ; i++){
        std::cout << w[i] << std::endl;
    }
    w.push_back(6);
    std::cout << "After" << std::endl;
    for(int i=0 ; i<10 ; i++){
        std::cout << w[i] << std::endl;
    }
}