using namespace std;
int main()
{
     int n,a[10],count = 0,flag = 0,temp,max;
    for (int i = 0; i < 10; i++){
        cin>>a[i];
    }
    
    for (int i = 0; i <= 9;i++){
        temp = a[i];
        do
        {
            max = temp % 10;
        }while(temp /= 10);
        if (max == 1)
            count++;
        if (max == 4)
            flag++;
        
    }   
    if (count == 3 && flag == 1){
        cout<<"TRUE";
        
    }else{
        cout<<"FALSE";
    }
    return 0;
}