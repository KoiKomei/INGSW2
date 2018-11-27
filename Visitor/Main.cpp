#include "CallVisitor.h"
#include "CountVisitor.h"

int main() {
	Color *set[] = { new Red, new Blu, new Blu, new Red, new Red, 0 };

	CountVisitor cont;
	CallVisitor call;

	for (int i = 0; set[i]; i++) {
		(*set[i]).accept(&cont);
		(*set[i]).accept(&call);
	}

	cont.reportnum();
	
}