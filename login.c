login()
{

	lr_think_time(37);

	lr_start_transaction("open_form");

	web_url("login", 
		"URL={host}:{port}/login/?next=/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={host}:{port}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("open_form",LR_AUTO);

	lr_start_transaction("log_in");

	web_submit_form("login_2", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
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