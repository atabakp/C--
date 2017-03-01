#include "stdafx.h"
#include "Phone.h"


Phone::Phone()
{
}

void Phone::print()
{
	Console::Write("+"+this->countryCode + "(" + this->areaCode + ")" + 
			this->line + " - " + this->Ext + " EXT " + internalExt);
}


void Phone::printDot()
{
	Console::Write(this->countryCode + "." + this->areaCode + "." +
		this->line + "." + this->Ext + "E" + internalExt);
}
