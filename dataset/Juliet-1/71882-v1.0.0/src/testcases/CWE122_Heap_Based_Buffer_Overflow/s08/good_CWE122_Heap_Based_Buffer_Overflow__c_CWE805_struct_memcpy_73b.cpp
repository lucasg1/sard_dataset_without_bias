using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct *> dataList);
void FUN1()
{
    twoIntsStruct * data;
    list<twoIntsStruct *> dataList;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct *> dataList)
{
    twoIntsStruct * data = dataList.back();
    {
        twoIntsStruct source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        memcpy(data, source, 100*sizeof(twoIntsStruct));
        printStructLine(&data[0]);
        free(data);
    }
}
} 
