Action()
{

	web_add_cookie("csrftoken=3AUd15yb9eLxf9WbXZbVGU8P1VxaveqqE2kBhYQsfnsh36nkqKfvGLdYEroAHrUV; DOMAIN=localhost");

	web_url("localhost:23232", 
		"URL=http://localhost:23232/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	return 0;
}
