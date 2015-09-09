#ifndef UNCOPYABLE_H
#define UNCOPYABLE_H

class UnCopyable{
protected:
	UnCopyable(){}
	~UnCopyable(){}
private:
	UnCopyable(const UnCopyable&);
	UnCopyable& operator=(const UnCopyable);
};
//usage: we need class<>:private Uncopyable
#endif
