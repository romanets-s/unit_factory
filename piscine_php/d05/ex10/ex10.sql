SELECT `title` AS 'Title', `summary` AS 'Summary', prod_year FROM db_sromanet.film INNER JOIN genre WHERE film.id_genre = genre.id_genre AND genre.name = 'erotic' ORDER BY film.prod_year DESC;