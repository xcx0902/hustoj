docker run -d \
    --network hustoj \
    --name hustoj.mysql \
    -e MYSQL_USER=xcx0902 \
    -e MYSQL_PASSWORD=xcx123456 \
    -v mysql:/var/lib/mysql \
    registry.gitlab.com/mgdream/hustoj:mysql

docker run -d \
    --network hustoj \
    --name hustoj.web \
    -e DB_HOST=hustoj \
    -e DB_NAME=hustoj.mysql \
    -e DB_USER=xcx0902 \
    -e DB_PASS=xcx123456  \
    -v data:/home/judge/data \
    -p 80:80 \
    registry.gitlab.com/mgdream/hustoj:web
