namespace NAMESPACE0 {
class HelperClass 
{
    public:
        HelperClass()
        {
            intZero = 0;
        }
    int intZero;
};
void FUN0() 
{
    HelperClass arrayHelperClass[5];
    HelperClass *ptrArrayHelperClass = arrayHelperClass;
    printIntLine((ptrArrayHelperClass + 3)->intZero);
}
};
