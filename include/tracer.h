#ifndef TRACER_H
#define TRACER_H

int execute_program(char *full_program, char **parsed_program, int monitor_fd);
int execute_status(int fd);
int execute_pipeline(
    char *pipeline, char **parsed_pipeline, int pipeline_cmds_count,
    int monitor_fd
);

#endif  // TRACER_H
