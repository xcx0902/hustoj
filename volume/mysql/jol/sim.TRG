TYPE=TRIGGERS
triggers='CREATE DEFINER=`debian-sys-maint`@`localhost` TRIGGER `simfilter` BEFORE INSERT ON `sim` FOR EACH ROW begin\n declare new_user_id varchar(64);\n declare old_user_id varchar(64);\n select user_id from solution where solution_id=new.s_id into new_user_id;\n select user_id from solution where solution_id=new.sim_s_id into old_user_id;\n if old_user_id=new_user_id then\n	set new.s_id=0;\n end if;\n \nend'
sql_modes=1168113696
definers='debian-sys-maint@localhost'
client_cs_names='utf8mb4'
connection_cl_names='utf8mb4_general_ci'
db_cl_names='latin1_swedish_ci'
created=167177486850
