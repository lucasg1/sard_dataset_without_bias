namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[50];
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int64_t * data);
void FUN5(int64_t * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int64_t * data);
void FUN2(int64_t * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printLongLongLine(data[0]);
            delete [] data;
        }
    }
}
} 
