TwoIntsClass * VAR0;
TwoIntsClass * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    VAR1 = data;
    FUN0();
}
} 
extern TwoIntsClass * VAR0;
extern TwoIntsClass * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    TwoIntsClass * data = VAR1;
    {
        TwoIntsClass source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0].intOne);
            delete [] data;
        }
    }
}
} 
