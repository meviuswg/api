<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: github.com/TheThingsNetwork/api/handler/handler.proto

namespace Handler;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * DryDownlinkMessage is a simulated message to test downlink processing
 *
 * Generated from protobuf message <code>handler.DryDownlinkMessage</code>
 */
class DryDownlinkMessage extends \Google\Protobuf\Internal\Message
{
    /**
     * The binary payload to use
     *
     * Generated from protobuf field <code>bytes payload = 1;</code>
     */
    protected $payload = '';
    /**
     * JSON-encoded object with fields to encode
     *
     * Generated from protobuf field <code>string fields = 2;</code>
     */
    protected $fields = '';
    /**
     * The Application containing the payload functions that should be executed
     *
     * Generated from protobuf field <code>.handler.Application app = 3 [(.gogoproto.nullable) = false];</code>
     */
    protected $app = null;
    /**
     * The port number that should be passed to the payload function
     *
     * Generated from protobuf field <code>uint32 port = 4;</code>
     */
    protected $port = 0;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $payload
     *           The binary payload to use
     *     @type string $fields
     *           JSON-encoded object with fields to encode
     *     @type \Handler\Application $app
     *           The Application containing the payload functions that should be executed
     *     @type int $port
     *           The port number that should be passed to the payload function
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\GithubCom\TheThingsNetwork\Api\Handler\Handler::initOnce();
        parent::__construct($data);
    }

    /**
     * The binary payload to use
     *
     * Generated from protobuf field <code>bytes payload = 1;</code>
     * @return string
     */
    public function getPayload()
    {
        return $this->payload;
    }

    /**
     * The binary payload to use
     *
     * Generated from protobuf field <code>bytes payload = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setPayload($var)
    {
        GPBUtil::checkString($var, False);
        $this->payload = $var;

        return $this;
    }

    /**
     * JSON-encoded object with fields to encode
     *
     * Generated from protobuf field <code>string fields = 2;</code>
     * @return string
     */
    public function getFields()
    {
        return $this->fields;
    }

    /**
     * JSON-encoded object with fields to encode
     *
     * Generated from protobuf field <code>string fields = 2;</code>
     * @param string $var
     * @return $this
     */
    public function setFields($var)
    {
        GPBUtil::checkString($var, True);
        $this->fields = $var;

        return $this;
    }

    /**
     * The Application containing the payload functions that should be executed
     *
     * Generated from protobuf field <code>.handler.Application app = 3 [(.gogoproto.nullable) = false];</code>
     * @return \Handler\Application
     */
    public function getApp()
    {
        return $this->app;
    }

    /**
     * The Application containing the payload functions that should be executed
     *
     * Generated from protobuf field <code>.handler.Application app = 3 [(.gogoproto.nullable) = false];</code>
     * @param \Handler\Application $var
     * @return $this
     */
    public function setApp($var)
    {
        GPBUtil::checkMessage($var, \Handler\Application::class);
        $this->app = $var;

        return $this;
    }

    /**
     * The port number that should be passed to the payload function
     *
     * Generated from protobuf field <code>uint32 port = 4;</code>
     * @return int
     */
    public function getPort()
    {
        return $this->port;
    }

    /**
     * The port number that should be passed to the payload function
     *
     * Generated from protobuf field <code>uint32 port = 4;</code>
     * @param int $var
     * @return $this
     */
    public function setPort($var)
    {
        GPBUtil::checkUint32($var);
        $this->port = $var;

        return $this;
    }

}

