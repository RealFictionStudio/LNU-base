SELECT last_name, first_name, COUNT(DISTINCT publisher_id) AS [publishers] FROM authors LEFT JOIN books ON author_id = id GROUP BY id ORDER BY [publishers] DESC, last_name, first_name;