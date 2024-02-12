#include <iostream>

#define да true
#define нет false




class olegator
{
private:

	const char* imya;
	bool granatoviy_chai;
	short int sostoyanie;
	
public:
	enum valera
	{
		dubstep = 1,
		pizdblyat,
		huevoe,
		tancyet,
		drochit,
		defoltnoe
	};

	olegator(const char* imya, bool hui, short int sostoyanie = defoltnoe)
	{
		this->imya = imya;
		this->granatoviy_chai = hui;
		this->sostoyanie = sostoyanie;
		
		printf("imya8=D: %s | hyi8=D: %d | sostoyanie8=D: %d | adris8=D: %p\n", imya, granatoviy_chai, sostoyanie, this);

	}
	~olegator() // описать поле деструктора кароче нет енет нетнетнтентент мы это щас делаем, всё enter Всем привет сегодня мы будем описы!
	{
		
	}

	const char* получить_nAIMYA()
	{
		return this->imya;
	}
	bool сичичас_саснсует_卐()
	{
		if (this->sostoyanie == tancyet)
			return да;
		// 卐
		return нет;
	}

	void dance()
	{
		if (this->сичичас_саснсует_卐()) 
			//8=D
			// 卐
			return;

		if (this->sostoyanie = tancyet)
			printf("%s _8====卐x卐x卐_  | blyat krokodil striptizer v vannoy cocedka suka besit ey bitch\n", this->получить_nAIMYA()); //8=d
		

			
			
			
			
			
			
			
			/// 卐теперь все мы на этом канале ебать я разрабатываем гмвоаылпрфвыпоривап мы уже целый чкас деалм5емсч卐
		
		

		






		// всем приветр сегодня я раскажу как зайти в апппдтаувпафыывап

		
	}


	// 8===D







};

int main()
{
	// int olegator 
	olegator olegator_1("imya ygar", да, olegator::huevoe);
	olegator olegator_2("imya misha", да, olegator::huevoe);
	olegator olegator_3("imya dima", да, olegator::huevoe);

	olegator_1.dance();
	olegator_3.dance();

}
