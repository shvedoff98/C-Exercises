//Write function which copies the C char array
//into dynamically allocated char array

using namespace std;

char* strdup(const char* test)
{

    int len = sizeof(test) / sizeof(test[0]);
    char* arr = new char[len+1];
    for(int i=0;i<len+1; ++i)
    { 
        arr[i] = test[i]; 
    }

    for (int i=0; i<len+1; ++i)
    {
        cout << arr[i];
    }
    cout << "\n";

    return arr;
    delete[] arr;
}


int main(int argc, char* argv[])
{
    strdup("cplusplus");
    return 0;
}
