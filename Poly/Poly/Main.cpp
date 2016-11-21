#include "Services.h"
#include "Camera.h"
#include "Phone.h"
#include "Mp3Player.h"
#include "VideoPlayer.h"
#include "Gameconsole.h"
#include "WebBrowser.h"
#include "SmallMessaging.h"
#include "MiltimediaMessaging.h"
#include "DayPlanner.h"
#include "EmailClient.h"
void main() {

	static Services *s[10];
	/*= {
	new Phone(),
	new Camera(),
	new Mp3Player() ,
	new VideoPlayer(), 
	new Gameconsole(),
	new WebBrowser() ,
	new SmallMessaging(),
	new MiltimediaMessaging(),
	new DayPlanner(),
	new EmailClient(),
	};*/

    Services *phone = new Phone();
	s[0] = phone;

	s[0]
	
	

	

	

}