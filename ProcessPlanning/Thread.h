#include <iostream>
#include <stdlib.h>
#include <pthread.h>
using namespace std;

namespace ProcessPlanning {
	class Thread {
	private:
		pthread_t _threadID;
		pthread_attr_t _tAttribute;

		//methods
		static void* runThread(void* pThread);
		virtual void run();

	public:
		Thread();
		virtual ~Thread();

		void start();
		void join();
		void yield();
	};
}