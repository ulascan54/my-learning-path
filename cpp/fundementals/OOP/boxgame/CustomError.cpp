#include "CustomError.h"

CustomError::CustomError(string title, string msj, int status)
{
    this->title = title;
    this->msj = msj;
    this->status = status;
}

void CustomError::displayMsj() const
{
    cout << "[" << title << "]"
         << ": " << msj << status << endl;
}