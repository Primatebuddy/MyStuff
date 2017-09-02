from imdb import IMDb

ia = IMDb()

s_result = ia.search_movie('Flash Gordon (1980)')


for item in s_result:
	print(item, '')
