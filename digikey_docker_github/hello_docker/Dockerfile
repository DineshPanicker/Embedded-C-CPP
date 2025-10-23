#Fetch Ubuntu image
FROM ubuntu:22.04

#installing python on image
RUN \
    apt-get update && \
    apt-get install -y python3 && \
    apt-get install -y build-essential

#create a directory for our tests
RUN mkdir /tests

#copy in our py script

COPY test.py /tests/test.py

#Copy in our program under test
COPY main.c /tests/main.c

#Command that will be invoked when the container starts
ENTRYPOINT [ "python3","tests/test.py" ]
# CMD [ "something", "else" ]

