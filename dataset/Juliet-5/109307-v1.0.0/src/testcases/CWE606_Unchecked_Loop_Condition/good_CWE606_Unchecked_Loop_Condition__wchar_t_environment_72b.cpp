using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<wchar_t *> dataVector);
void FUN1()
{
    wchar_t * data;
    vector<wchar_t *> dataVector;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"15");
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<wchar_t *> dataVector);
void FUN3()
{
    wchar_t * data;
    vector<wchar_t *> dataVector;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<wchar_t *> dataVector)
{
    wchar_t * data = dataVector[2];
    {
        int i, n, intVariable;
        if (swscanf(data, L"%d", &n) == 1)
        {
            intVariable = 0;
            for (i = 0; i < n; i++)
            {
                intVariable++; 
            }
            printIntLine(intVariable);
        }
    }
}
void FUN2(vector<wchar_t *> dataVector)
{
    wchar_t * data = dataVector[2];
    {
        int i, n, intVariable;
        if (swscanf(data, L"%d", &n) == 1)
        {
            if (n < MAX_LOOP)
            {
                intVariable = 0;
                for (i = 0; i < n; i++)
                {
                    intVariable++; 
                }
                printIntLine(intVariable);
            }
        }
    }
}
} 
