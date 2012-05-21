#include "stdafx.h"

namespace ProcessPlanning 
{
	Thread::Thread() { }
	Thread::~Thread() { }
	void Thread::run() { }

	void Thread::yield() 
	{
		sched_yield();
	}

	void Thread::start() 
	{
		int status = pthread_attr_init(&_tAttribute);
		status = pthread_attr_setscope(&_tAttribute, PTHREAD_SCOPE_SYSTEM);
		if (status != 0)
			throw "Unable to init thread attribute"; //falha ao iniciar atributo da thread

		status = pthread_create(&_threadID, &_tAttribute, Thread::runThread, (void*)this);
		if (status != 0)
			throw "Unable to init thread"; //falha ao iniciar a thread

		status = pthread_attr_destroy(&_tAttribute);
		if (status != 0)
			throw "Unable to destroy thread attribute"; // falha ao destruir atributo da thread
	}

	void Thread::join()
	{
		int status = pthread_join(_threadID, NULL);
		if (status != 0)
			throw "Join command failed"; //comando join falhou
	}

	void* Thread::runThread(void* pThread)
	{
		Thread* sThread = static_cast<Thread*>(pThread);

		if (NULL == sThread)
			throw "Thread failed"; //thread falhou
		else
			sThread->run();
	}

}