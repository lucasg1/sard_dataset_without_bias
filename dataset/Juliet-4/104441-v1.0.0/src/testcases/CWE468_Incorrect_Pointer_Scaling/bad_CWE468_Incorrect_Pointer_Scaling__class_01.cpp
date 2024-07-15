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
<START>
    printIntLine((ptrArrayHelperClass + 3 * sizeof(HelperClass))->intZero);
<END>
}
};
