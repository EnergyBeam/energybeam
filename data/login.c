login()
{

	lr_think_time(37);

	lr_start_transaction("open_form");

	web_url("login", 
		"URL=http://localhost:23232/login/?next=/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:23232/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("open_form",LR_AUTO);

	lr_start_transaction("log_in");

	web_submit_form("login_2", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=username", "Value=admin", ENDITEM, 
		"Name=password", "Value=admindev", ENDITEM, 
		LAST);

	lr_end_transaction("log_in",LR_AUTO);

	lr_think_time(65);

	lr_start_transaction("ticket");

	web_link("Dashboard", 
		"Text=Dashboard", 
		"Snapshot=t4.inf", 
		LAST);

	lr_end_transaction("ticket",LR_AUTO);

	lr_start_transaction("log_out");

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t5.inf", 
		LAST);

	lr_end_transaction("log_out",LR_AUTO);

	return 0;
}